/* strmif.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 60 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _STRMIF_
#define _STRMIF_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
/* C-NAME COLLISION -- the page prints the constant AM_FILTER_MISC_FLAG_NO_CAPTURE_PAUSE = 0x00000004; AM_FILTER_MISC_FLAG_NO_CAPTURE_PAUSE is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_FILTER_MISC_FLAGS_IS_RENDERER = 0x00000001; AM_FILTER_MISC_FLAGS_IS_RENDERER is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_FILTER_MISC_FLAGS_IS_SOURCE = 0x00000002; AM_FILTER_MISC_FLAGS_IS_SOURCE is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_DATADISCONTINUITY = 0x04; AM_SAMPLE_DATADISCONTINUITY is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_ENDOFSTREAM = 0x200; AM_SAMPLE_ENDOFSTREAM is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_FLUSH_ON_PAUSE = 0x80; AM_SAMPLE_FLUSH_ON_PAUSE is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_PREROLL = 0x02; AM_SAMPLE_PREROLL is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_SPLICEPOINT = 0x01; AM_SAMPLE_SPLICEPOINT is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_STOPVALID = 0x100; AM_SAMPLE_STOPVALID is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_TIMEDISCONTINUITY = 0x40; AM_SAMPLE_TIMEDISCONTINUITY is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_TIMEVALID = 0x10; AM_SAMPLE_TIMEVALID is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_SAMPLE_TYPECHANGED = 0x08; AM_SAMPLE_TYPECHANGED is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_STREAM_CONTROL = 1; AM_STREAM_CONTROL is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant AM_STREAM_MEDIA = 0; AM_STREAM_MEDIA is a type in this surface, so it is documented here, not #defined */
#define CK_INDEX 0x00000001
#define CK_NOCOLORKEY 0x00000000
#define CK_RGB 0x00000002
#define DVD_AUDIO_CAPS_AC3 0x00000001
#define DVD_AUDIO_CAPS_DTS 0x00000008
#define DVD_AUDIO_CAPS_LPCM 0x00000004
#define DVD_AUDIO_CAPS_MPEG2 0x00000002
#define DVD_AUDIO_CAPS_SDDS 0x00000010
#define ED_FORMAT_SMPTE_24 0x00001199
#define ED_FORMAT_SMPTE_25 0x00001198
#define ED_FORMAT_SMPTE_30 0x00001196
#define ED_FORMAT_SMPTE_30DROP 0x00001197
#define KSAUDIO_SPEAKER_CENTER 0x00000004
#define KSAUDIO_SPEAKER_LEFT 0x00000001
#define KSAUDIO_SPEAKER_LEFT_OF_CENTER 0x00000040
#define KSAUDIO_SPEAKER_RIGHT 0x00000002
#define KSAUDIO_SPEAKER_RIGHT_OF_CENTER 0x00000080
#define KSAUDIO_SPEAKER_SIDE_LEFT 0x00000200
#define KSAUDIO_SPEAKER_SIDE_RIGHT 0x00000400
#define KSAUDIO_SPEAKER_SUBWOOFER 0x00000020
#define KSAUDIO_SPEAKER_SURROUND_LEFT 0x00000008
#define KSAUDIO_SPEAKER_SURROUND_MONO 0x00000100
#define KSAUDIO_SPEAKER_SURROUND_RIGHT 0x00000010
#define KSAUDIO_SPEAKER_TOP 0x00000800
#define MAX_FILTER_NAME 128
#define MAX_PIN_NAME 128
/* C-NAME COLLISION -- the page prints the constant MERIT_DO_NOT_USE = 0x200000; MERIT_DO_NOT_USE is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant MERIT_HW_COMPRESSOR = 0x100050; MERIT_HW_COMPRESSOR is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant MERIT_NORMAL = 0x600000; MERIT_NORMAL is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant MERIT_PREFERRED = 0x800000; MERIT_PREFERRED is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant MERIT_SW_COMPRESSOR = 0x100000; MERIT_SW_COMPRESSOR is a type in this surface, so it is documented here, not #defined */
/* C-NAME COLLISION -- the page prints the constant MERIT_UNLIKELY = 0x400000; MERIT_UNLIKELY is a type in this surface, so it is documented here, not #defined */
#define MPEG2_PROGRAM_DIRECTORY_PES_PACKET 0x00000002
#define MPEG2_PROGRAM_ELEMENTARY_STREAM 0x00000001
#define MPEG2_PROGRAM_PACK_HEADER 0x00000003
#define MPEG2_PROGRAM_PES_STREAM 0x00000004
#define MPEG2_PROGRAM_STREAM_MAP 0x00000000
#define MPEG2_PROGRAM_SYSTEM_HEADER 0x00000005
#define SUBSTREAM_FILTER_VAL_NONE 0x10000000
#define TVAUDIO_MODE_MASK 0x000000FF
#define TVAUDIO_PRESET_MASK 0x0000FF00
#define VMRBITMAP_DISABLE 0x00000001
#define VMRBITMAP_ENTIREDDS 0x00000004
#define VMRBITMAP_HDC 0x00000002
#define VMRBITMAP_SRCCOLORKEY 0x00000008
#define VMRBITMAP_SRCRECT 0x00000010

#endif /* _STRMIF_ */
