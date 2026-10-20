-- kb/schema.sql -- the knowledge-base contract (schema version 2).
--
-- One SQLite database (kb/kb.sqlite3) built only by tools/kbgen from:
-- corpus/ pages (via data/index/INDEX.tsv), data/catalogs/, the licence
-- registry, the Win32 shared-surface map, the human reviews in
-- kb/inputs/reviews/, and the pinned third-party references under
-- sources/.  See docs/kb-design.ja.md (section 12 for the CeGCC
-- adoption layer) and docs/cegcc-survey.ja.md.
--
-- Layers inside one DB, separated by provenance, never mixed:
--   ce     -- Microsoft Windows CE documentation (the facts)
--   win32  -- the CE-shared Win32 reference pages (facts about those pages)
--   dotnet -- the .NET families on top of CE (kept apart)
--   oss    -- allowlisted open-source documents (notes only, no symbols)
--   cegcc  -- values adopted from the public-domain CeGCC headers for
--             names the CE documentation numbers nowhere (resolved
--             layer only; never a page layer, never overrides ce)
-- Reference material lives in reference_* tables.  A reference row
-- can be cited ONLY by a 'cegcc'-layer resolved row -- never by a CE
-- fact; validate.py enforces the boundary.
--
-- Every observation names the corpus page it quotes (page_path -> pages),
-- and the page row carries its licence scope.  Resolved facts cite
-- observations or review rows through *_evidence tables.

PRAGMA foreign_keys = ON;

-- ------------------------------------------------------------------ meta

CREATE TABLE kb_meta (
    key   TEXT PRIMARY KEY,
    value TEXT NOT NULL
) STRICT;

CREATE TABLE build_inputs (
    path   TEXT PRIMARY KEY,
    role   TEXT NOT NULL,
    sha256 TEXT NOT NULL,
    size   INTEGER NOT NULL
) STRICT;

CREATE TABLE ingest_rejects (
    extractor    TEXT NOT NULL,
    reason       TEXT NOT NULL,
    n            INTEGER NOT NULL,
    example_page TEXT NOT NULL,
    example_text TEXT NOT NULL,
    PRIMARY KEY (extractor, reason)
) STRICT;

-- ------------------------------------------------------- corpus registry

CREATE TABLE ce_versions (
    version TEXT PRIMARY KEY
) STRICT;

CREATE TABLE doc_sets (
    book       TEXT PRIMARY KEY,
    tree       TEXT NOT NULL,
    layer      TEXT NOT NULL CHECK (layer IN ('ce','win32','dotnet','oss')),
    ce_version TEXT REFERENCES ce_versions(version)
) STRICT;

CREATE TABLE pages (
    path          TEXT PRIMARY KEY,
    page_id       TEXT NOT NULL,
    book          TEXT NOT NULL REFERENCES doc_sets(book),
    title         TEXT NOT NULL,
    sha256        TEXT NOT NULL,
    size          INTEGER NOT NULL,
    license_scope TEXT NOT NULL
) STRICT;
CREATE INDEX pages_book ON pages(book);
CREATE INDEX pages_page_id ON pages(page_id);

CREATE TABLE text_blobs (
    sha256 TEXT PRIMARY KEY,
    text   TEXT NOT NULL
) STRICT;

-- ---------------------------------------------------------------- symbols

CREATE TABLE symbols (
    symbol_key   TEXT PRIMARY KEY,
    display_name TEXT NOT NULL,
    parent_key   TEXT REFERENCES symbols(symbol_key),
    local_name   TEXT
) STRICT;
CREATE INDEX symbols_display ON symbols(display_name);

CREATE TABLE symbol_spellings (
    symbol_key TEXT NOT NULL REFERENCES symbols(symbol_key),
    spelling   TEXT NOT NULL,
    page_path  TEXT NOT NULL REFERENCES pages(path),
    basis      TEXT NOT NULL,
    PRIMARY KEY (symbol_key, spelling, page_path, basis)
) STRICT;

CREATE TABLE symbol_kinds (
    symbol_key TEXT NOT NULL REFERENCES symbols(symbol_key),
    kind       TEXT NOT NULL,
    basis      TEXT NOT NULL,
    PRIMARY KEY (symbol_key, kind, basis)
) STRICT;

CREATE TABLE page_subjects (
    page_path  TEXT NOT NULL REFERENCES pages(path),
    symbol_key TEXT NOT NULL REFERENCES symbols(symbol_key),
    basis      TEXT NOT NULL,
    is_primary INTEGER NOT NULL CHECK (is_primary IN (0,1)),
    PRIMARY KEY (page_path, symbol_key)
) STRICT;
CREATE INDEX page_subjects_symbol ON page_subjects(symbol_key);

CREATE TABLE headers (
    header_key   TEXT PRIMARY KEY,
    display_name TEXT NOT NULL
) STRICT;

CREATE TABLE header_spellings (
    header_key TEXT NOT NULL REFERENCES headers(header_key),
    spelling   TEXT NOT NULL,
    page_path  TEXT NOT NULL REFERENCES pages(path),
    PRIMARY KEY (header_key, spelling, page_path)
) STRICT;

CREATE TABLE link_files (
    file_key     TEXT NOT NULL,
    file_kind    TEXT NOT NULL CHECK (file_kind IN ('lib','dll','module')),
    display_name TEXT NOT NULL,
    PRIMARY KEY (file_key, file_kind)
) STRICT;

-- ----------------------------------------------------------- observations

CREATE TABLE observation_index (
    obs_id    TEXT PRIMARY KEY,
    obs_kind  TEXT NOT NULL,
    page_path TEXT NOT NULL REFERENCES pages(path)
) STRICT;
CREATE INDEX observation_index_page ON observation_index(page_path);

CREATE TABLE declaration_observations (
    obs_id             TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    subject_key        TEXT REFERENCES symbols(symbol_key),
    page_path          TEXT NOT NULL REFERENCES pages(path),
    kind               TEXT,
    role               TEXT NOT NULL,
    markup             TEXT,
    spacing            TEXT NOT NULL,
    calling_convention TEXT,
    implementation     INTEGER NOT NULL CHECK (implementation IN (0,1)),
    language           TEXT NOT NULL CHECK (language IN ('c','managed')),
    text_sha256        TEXT NOT NULL REFERENCES text_blobs(sha256),
    ws_norm_sha256     TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;
CREATE INDEX decl_obs_subject ON declaration_observations(subject_key);

CREATE TABLE declaration_members (
    obs_id      TEXT NOT NULL REFERENCES declaration_observations(obs_id),
    position    INTEGER NOT NULL,
    member_name TEXT,
    member_type TEXT,
    raw         TEXT NOT NULL,
    PRIMARY KEY (obs_id, position)
) STRICT;

CREATE TABLE declaration_abi_flags (
    obs_id TEXT NOT NULL REFERENCES declaration_observations(obs_id),
    flag   TEXT NOT NULL,
    PRIMARY KEY (obs_id, flag)
) STRICT;

CREATE TABLE requirement_observations (
    obs_id       TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    subject_key  TEXT REFERENCES symbols(symbol_key),
    for_name     TEXT,
    page_path    TEXT NOT NULL REFERENCES pages(path),
    field        TEXT NOT NULL,
    label        TEXT NOT NULL,
    value_raw    TEXT NOT NULL,
    value_key    TEXT NOT NULL,
    evidence_sha256 TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;
CREATE INDEX req_obs_subject ON requirement_observations(subject_key);

CREATE TABLE requirement_files (
    obs_id    TEXT NOT NULL REFERENCES requirement_observations(obs_id),
    file_key  TEXT NOT NULL,
    file_kind TEXT NOT NULL,
    PRIMARY KEY (obs_id, file_key, file_kind)
) STRICT;

CREATE TABLE constant_observations (
    obs_id       TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    symbol_key   TEXT NOT NULL REFERENCES symbols(symbol_key),
    page_path    TEXT NOT NULL REFERENCES pages(path),
    value_raw    TEXT NOT NULL,
    value_int    INTEGER,
    decimal_raw  TEXT,
    origin       TEXT NOT NULL,
    group_header TEXT,
    table_sha256 TEXT NOT NULL REFERENCES text_blobs(sha256),
    row_sha256   TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;
CREATE INDEX const_obs_symbol ON constant_observations(symbol_key);

CREATE TABLE constant_name_observations (
    obs_id       TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    symbol_key   TEXT NOT NULL REFERENCES symbols(symbol_key),
    page_path    TEXT NOT NULL REFERENCES pages(path),
    table_sha256 TEXT NOT NULL REFERENCES text_blobs(sha256),
    row_sha256   TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;
CREATE INDEX const_name_obs_symbol ON constant_name_observations(symbol_key);

CREATE TABLE note_observations (
    obs_id      TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    subject_key TEXT REFERENCES symbols(symbol_key),
    page_path   TEXT NOT NULL REFERENCES pages(path),
    kind        TEXT NOT NULL,
    pattern     TEXT,
    text_sha256 TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;

-- Membership/link statements a page prints ("FOO is defined in X.h",
-- "the following constants ... in Limits.h", "not included in Winuser.h",
-- "you must link to Y.lib", component-page function listings).
CREATE TABLE membership_statements (
    obs_id      TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    page_path   TEXT NOT NULL REFERENCES pages(path),
    stmt_kind   TEXT NOT NULL CHECK (stmt_kind IN
        ('name-header','family-header','header-exclusion','link',
         'listed-function')),
    subject_key TEXT REFERENCES symbols(symbol_key),
    target_name TEXT,
    family      TEXT,
    field       TEXT,
    header_key  TEXT REFERENCES headers(header_key),
    file_key    TEXT,
    file_kind   TEXT,
    text_sha256 TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;

CREATE TABLE documented_members (
    obs_id      TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    subject_key TEXT REFERENCES symbols(symbol_key),
    page_path   TEXT NOT NULL REFERENCES pages(path),
    member_name TEXT NOT NULL,
    position    INTEGER NOT NULL
) STRICT;

CREATE TABLE layout_observations (
    obs_id         TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    subject_key    TEXT REFERENCES symbols(symbol_key),
    page_path      TEXT NOT NULL REFERENCES pages(path),
    member         TEXT NOT NULL,
    offset_value   INTEGER,
    offset_printed TEXT,
    size_value     INTEGER,
    size_printed   TEXT,
    size_unit      TEXT,
    matches_declared_member INTEGER NOT NULL CHECK
        (matches_declared_member IN (0,1)),
    table_sha256   TEXT NOT NULL REFERENCES text_blobs(sha256),
    row_sha256     TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;

CREATE TABLE ordinal_observations (
    obs_id      TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    symbol_key  TEXT REFERENCES symbols(symbol_key),
    page_path   TEXT NOT NULL REFERENCES pages(path),
    dll_name    TEXT,
    ordinal     INTEGER,
    row_sha256  TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;

CREATE TABLE module_observations (
    obs_id      TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    subject_key TEXT REFERENCES symbols(symbol_key),
    page_path   TEXT NOT NULL REFERENCES pages(path),
    fact_kind   TEXT NOT NULL,
    name        TEXT,
    value       TEXT,
    row_sha256  TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;

CREATE TABLE support_statements (
    obs_id      TEXT PRIMARY KEY REFERENCES observation_index(obs_id),
    subject_key TEXT REFERENCES symbols(symbol_key),
    page_path   TEXT NOT NULL REFERENCES pages(path),
    stmt_kind   TEXT NOT NULL CHECK (stmt_kind IN
        ('unicode-only','unsupported-constant','only-supported-constant')),
    name        TEXT,
    text_sha256 TEXT NOT NULL REFERENCES text_blobs(sha256)
) STRICT;

-- ---------------------------------------------------------------- reviews

CREATE TABLE reviews (
    review_id      TEXT PRIMARY KEY,
    kind           TEXT NOT NULL CHECK (kind IN
        ('constant-header','constant-value')),
    scope          TEXT,
    name           TEXT NOT NULL,
    name_key       TEXT NOT NULL,
    header_key     TEXT,
    verdict        TEXT,
    resolved_value TEXT,
    category       TEXT,
    evidence_page  TEXT,
    note           TEXT,
    source_file    TEXT NOT NULL
) STRICT;

-- ------------------------------------------------------------- resolution

CREATE TABLE symbol_headers (
    symbol_key TEXT NOT NULL REFERENCES symbols(symbol_key),
    header_key TEXT NOT NULL REFERENCES headers(header_key),
    layer      TEXT NOT NULL CHECK (layer IN ('ce','win32','dotnet','cegcc')),
    rank       INTEGER NOT NULL,      -- lower = stronger (resolve.py RANK_*)
    rank_name  TEXT NOT NULL,
    is_chosen  INTEGER NOT NULL CHECK (is_chosen IN (0,1)),
    PRIMARY KEY (symbol_key, header_key, layer)
) STRICT;
CREATE INDEX symbol_headers_header ON symbol_headers(header_key);

-- Evidence rows carry a content-hash id: exactly one of
-- obs_id/review_id/reference_id is set (reference_id only for
-- 'cegcc'-layer rows), and a nullable column cannot sit in a STRICT
-- primary key.
CREATE TABLE symbol_header_evidence (
    evidence_id TEXT PRIMARY KEY,
    symbol_key TEXT NOT NULL,
    header_key TEXT NOT NULL,
    layer      TEXT NOT NULL,
    obs_id       TEXT REFERENCES observation_index(obs_id),
    review_id    TEXT REFERENCES reviews(review_id),
    reference_id TEXT REFERENCES reference_names(reference_id),
    CHECK ((obs_id IS NOT NULL) + (review_id IS NOT NULL)
         + (reference_id IS NOT NULL) = 1),
    FOREIGN KEY (symbol_key, header_key, layer)
        REFERENCES symbol_headers(symbol_key, header_key, layer)
) STRICT;

-- Unlike headers (at most one chosen per layer), link files are
-- multi-valued: every candidate with rank <= membership is chosen,
-- because one API can legitimately be linked from several libraries
-- (e.g. a subject page's coredll.lib and a component page's own .lib).
CREATE TABLE symbol_files (
    symbol_key TEXT NOT NULL REFERENCES symbols(symbol_key),
    file_key   TEXT NOT NULL,
    file_kind  TEXT NOT NULL CHECK (file_kind IN ('lib','dll','module')),
    layer      TEXT NOT NULL CHECK (layer IN ('ce','win32','dotnet')),
    rank       INTEGER NOT NULL,
    rank_name  TEXT NOT NULL,
    is_chosen  INTEGER NOT NULL CHECK (is_chosen IN (0,1)),
    PRIMARY KEY (symbol_key, file_key, file_kind, layer),
    FOREIGN KEY (file_key, file_kind) REFERENCES link_files(file_key, file_kind)
) STRICT;
CREATE INDEX symbol_files_file ON symbol_files(file_key);

CREATE TABLE symbol_file_evidence (
    evidence_id TEXT PRIMARY KEY,
    symbol_key TEXT NOT NULL,
    file_key   TEXT NOT NULL,
    file_kind  TEXT NOT NULL,
    layer      TEXT NOT NULL,
    obs_id     TEXT REFERENCES observation_index(obs_id),
    review_id  TEXT REFERENCES reviews(review_id),
    CHECK ((obs_id IS NULL) != (review_id IS NULL)),
    FOREIGN KEY (symbol_key, file_key, file_kind, layer)
        REFERENCES symbol_files(symbol_key, file_key, file_kind, layer)
) STRICT;

CREATE TABLE declaration_variants (
    variant_id         TEXT PRIMARY KEY,
    symbol_key         TEXT NOT NULL REFERENCES symbols(symbol_key),
    layer              TEXT NOT NULL CHECK (layer IN ('ce','win32','dotnet')),
    ws_norm_sha256     TEXT NOT NULL REFERENCES text_blobs(sha256),
    kind               TEXT,
    calling_convention TEXT,
    is_primary         INTEGER NOT NULL CHECK (is_primary IN (0,1)),
    n_pages            INTEGER NOT NULL,
    n_preserved        INTEGER NOT NULL
) STRICT;

CREATE TABLE declaration_variant_observations (
    variant_id TEXT NOT NULL REFERENCES declaration_variants(variant_id),
    obs_id     TEXT NOT NULL REFERENCES declaration_observations(obs_id),
    PRIMARY KEY (variant_id, obs_id)
) STRICT;

CREATE TABLE constant_values (
    symbol_key TEXT NOT NULL REFERENCES symbols(symbol_key),
    layer      TEXT NOT NULL CHECK (layer IN ('ce','win32','dotnet','cegcc')),
    scope      TEXT NOT NULL,          -- '*' or a CE version like '5.0'
    value_kind TEXT NOT NULL CHECK (value_kind IN ('integer','expression')),
    value_int  INTEGER,
    value_raw  TEXT NOT NULL,
    status     TEXT NOT NULL CHECK (status IN ('resolved','reviewed')),
    PRIMARY KEY (symbol_key, layer, scope)
) STRICT;

CREATE TABLE constant_value_evidence (
    evidence_id TEXT PRIMARY KEY,
    symbol_key TEXT NOT NULL,
    layer      TEXT NOT NULL,
    scope      TEXT NOT NULL,
    obs_id       TEXT REFERENCES observation_index(obs_id),
    review_id    TEXT REFERENCES reviews(review_id),
    reference_id TEXT REFERENCES reference_names(reference_id),
    CHECK ((obs_id IS NOT NULL) + (review_id IS NOT NULL)
         + (reference_id IS NOT NULL) = 1),
    FOREIGN KEY (symbol_key, layer, scope)
        REFERENCES constant_values(symbol_key, layer, scope)
) STRICT;

CREATE TABLE symbol_versions (
    symbol_key   TEXT NOT NULL REFERENCES symbols(symbol_key),
    layer        TEXT NOT NULL CHECK (layer IN ('ce','win32','dotnet')),
    obs_id       TEXT NOT NULL REFERENCES requirement_observations(obs_id),
    min_version  TEXT,
    max_version  TEXT,
    raw          TEXT NOT NULL,
    parse_status TEXT NOT NULL CHECK (parse_status IN
        ('parsed','partial','unparsed','not_supported')),
    PRIMARY KEY (symbol_key, layer, obs_id)
) STRICT;

-- For ansi/unicode: symbol_key is the A/W variant, other_key the CE
-- base name.  For typedef_alias: symbol_key is the typedef name,
-- other_key the struct/union/enum tag it aliases (basis 'declaration',
-- derived from the quoted typedef).
CREATE TABLE symbol_relations (
    symbol_key   TEXT NOT NULL REFERENCES symbols(symbol_key),
    other_key    TEXT NOT NULL REFERENCES symbols(symbol_key),
    variant_kind TEXT NOT NULL CHECK (variant_kind IN ('ansi','unicode','typedef_alias')),
    basis        TEXT NOT NULL CHECK (basis IN ('page-statement','import-rule','declaration')),
    PRIMARY KEY (symbol_key, other_key, basis)
) STRICT;

CREATE TABLE conflicts (
    conflict_id TEXT PRIMARY KEY,
    kind        TEXT NOT NULL CHECK (kind IN
        ('header-choice','declaration-divergence','constant-value')),
    symbol_key  TEXT NOT NULL REFERENCES symbols(symbol_key),
    layer       TEXT NOT NULL CHECK (layer IN ('ce','win32','dotnet')),
    detail      TEXT NOT NULL,
    status      TEXT NOT NULL CHECK (status IN ('open','reviewed'))
) STRICT;

-- ------------------------------------------------- isolated reference data

CREATE TABLE reference_sources (
    source_id   TEXT PRIMARY KEY,
    description TEXT NOT NULL,
    archive     TEXT NOT NULL,
    sha256      TEXT NOT NULL
) STRICT;

CREATE TABLE reference_names (
    reference_id  TEXT PRIMARY KEY,   -- content hash (references.py)
    source_id     TEXT NOT NULL REFERENCES reference_sources(source_id),
    kind          TEXT NOT NULL CHECK (kind IN ('define','export','dllimport','const')),
    name          TEXT NOT NULL,
    name_key      TEXT NOT NULL,      -- symbol_key form, comparison joins only
    header_key    TEXT,               -- define/const: the file that prints it
    module_name   TEXT,               -- export/dllimport: the module/dll as printed
    value_printed TEXT,               -- define/const: value as printed
    value_int     INTEGER,
    locator       TEXT NOT NULL,      -- archive member (and line when known)
    adoptable     INTEGER NOT NULL CHECK (adoptable IN (0,1)),
    -- define rows of the CeGCC header modules: the _WIN32_WCE guard
    -- context of the printed line, as CeGCC's CE adaptation wrote it --
    -- 'wce>=0x420' (a version floor), 'wce' (CE-only branch), 'not-wce'
    -- (excluded when compiling for CE: desktop branch or dead code),
    -- '' (unguarded).  NULL for rows the notion does not apply to
    -- (exports, the pinvoke comparison module).
    ce_guard      TEXT CHECK (ce_guard IS NULL OR ce_guard IN ('','wce','not-wce')
                              OR ce_guard LIKE 'wce>=0x%'),
    UNIQUE (source_id, kind, locator, name)
) STRICT;
CREATE INDEX reference_names_key ON reference_names(name_key);

-- ------------------------------------------------------------------- views

CREATE VIEW v_symbol_surface AS
SELECT s.symbol_key, s.display_name,
       MAX(CASE WHEN d.layer='ce' THEN 1 ELSE 0 END) AS has_ce_page,
       MAX(CASE WHEN d.layer='win32' THEN 1 ELSE 0 END) AS has_win32_page,
       MAX(CASE WHEN d.layer='dotnet' THEN 1 ELSE 0 END) AS has_dotnet_page
FROM symbols s
JOIN page_subjects ps ON ps.symbol_key = s.symbol_key
JOIN pages p ON p.path = ps.page_path
JOIN doc_sets d ON d.book = p.book
GROUP BY s.symbol_key, s.display_name;

CREATE VIEW v_header_symbols AS
SELECT sh.header_key, sh.layer, sh.symbol_key, s.display_name
FROM symbol_headers sh
JOIN symbols s ON s.symbol_key = sh.symbol_key
WHERE sh.is_chosen = 1;

CREATE VIEW v_module_symbols AS
SELECT sf.file_key, sf.file_kind, sf.layer, sf.symbol_key, s.display_name
FROM symbol_files sf
JOIN symbols s ON s.symbol_key = sf.symbol_key
WHERE sf.is_chosen = 1;

CREATE VIEW v_constant_reference_compare AS
SELECT cv.symbol_key, s.display_name, cv.value_int AS ce_value_int,
       cv.value_raw AS ce_value_raw, rn.source_id,
       rn.value_int AS ref_value_int, rn.value_printed AS ref_value_printed,
       rn.header_key AS ref_header, rn.locator,
       CASE WHEN rn.value_int IS NOT NULL AND cv.value_int IS NOT NULL
            THEN CASE WHEN rn.value_int = cv.value_int
                           OR (rn.value_int & 4294967295)
                              = (cv.value_int & 4294967295)
                      THEN 'agree' ELSE 'differ' END
            ELSE 'uncomparable' END AS comparison
FROM constant_values cv
JOIN symbols s ON s.symbol_key = cv.symbol_key
JOIN reference_names rn ON rn.name_key = cv.symbol_key
     AND rn.kind IN ('define','const')
WHERE cv.layer = 'ce' AND cv.scope = '*';

-- Resolved constant values across layers, side by side.  The cegcc
-- columns are populated only where the CE documentation prints no
-- number (schema-v2 adoption layer, docs/kb-design.ja.md section 12).
CREATE VIEW v_symbol_values AS
SELECT s.symbol_key, s.display_name,
       ce.value_int AS ce_value_int, ce.value_raw AS ce_value_raw,
       w32.value_int AS win32_value_int, w32.value_raw AS win32_value_raw,
       cg.value_int AS cegcc_value_int, cg.value_raw AS cegcc_value_raw
FROM symbols s
LEFT JOIN constant_values ce
  ON ce.symbol_key = s.symbol_key AND ce.layer = 'ce' AND ce.scope = '*'
LEFT JOIN constant_values w32
  ON w32.symbol_key = s.symbol_key AND w32.layer = 'win32' AND w32.scope = '*'
LEFT JOIN constant_values cg
  ON cg.symbol_key = s.symbol_key AND cg.layer = 'cegcc' AND cg.scope = '*'
WHERE ce.symbol_key IS NOT NULL OR w32.symbol_key IS NOT NULL
   OR cg.symbol_key IS NOT NULL;
