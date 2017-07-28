/* src/matio/config.h.  Generated from config.h.in by configure.  */
/* src/matio/config.h.in.  Generated from configure.ac by autoheader.  */

#ifndef CONFIG_H
#define CONFIG_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1
#ifdef HAVE_INTTYPES_H
#include <inttypes.h>
#endif

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1
#ifdef HAVE_STDLIB_H
#include <stdlib.h>
#endif

/* Have MAT int16 */
#define HAVE_MAT_INT16_T /**/

/* Have MAT int32 */
#define HAVE_MAT_INT32_T /**/

/* Have MAT int64 */
#define HAVE_MAT_INT64_T /**/

/* Have MAT int8 */
#define HAVE_MAT_INT8_T /**/

/* Have MAT int16 */
#define HAVE_MAT_UINT16_T /**/

/* Have MAT int32 */
#define HAVE_MAT_UINT32_T /**/

/* Have MAT int64 */
#define HAVE_MAT_UINT64_T /**/

/* Have MAT int8 */
#define HAVE_MAT_UINT8_T /**/

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "stefan.widgren@sva.se"

/* Define to the full name of this package. */
#define PACKAGE_NAME "rmatio"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "rmatio see.DESCRIPTION.file"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "rmatio"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "see.DESCRIPTION.file"

/* The size of `char', as computed by sizeof. */
#define SIZEOF_CHAR 1

/* The size of `double', as computed by sizeof. */
#define SIZEOF_DOUBLE 8

/* The size of `float', as computed by sizeof. */
#define SIZEOF_FLOAT 4

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 8

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* The size of `size_t', as computed by sizeof. */
#define SIZEOF_SIZE_T 8

/* The size of `void *', as computed by sizeof. */
#define SIZEOF_VOID_P 8

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* int16 type */
#define _mat_int16_t int16_t

/* int32 type */
#define _mat_int32_t int32_t

/* int64 type */
#define _mat_int64_t int64_t

/* int8 type */
#define _mat_int8_t int8_t

/* int16 type */
#define _mat_uint16_t uint16_t

/* int32 type */
#define _mat_uint32_t uint32_t

/* int64 type */
#define _mat_uint64_t uint64_t

/* int8 type */
#define _mat_uint8_t uint8_t

#ifdef _mat_int64_t
    typedef _mat_int64_t mat_int64_t;
#endif
#ifdef _mat_uint64_t
    typedef _mat_uint64_t mat_uint64_t;
#endif
#ifdef _mat_int32_t
    typedef _mat_int32_t mat_int32_t;
#endif
#ifdef _mat_uint32_t
    typedef _mat_uint32_t mat_uint32_t;
#endif
#ifdef _mat_int16_t
    typedef _mat_int16_t mat_int16_t;
#endif
#ifdef _mat_uint16_t
    typedef _mat_uint16_t mat_uint16_t;
#endif
#ifdef _mat_int8_t
    typedef _mat_int8_t mat_int8_t;
#endif
#ifdef _mat_uint8_t
    typedef _mat_uint8_t mat_uint8_t;
#endif

/* Have zlib */
#define HAVE_ZLIB 1

/* MAT v7.3 file support */
/* #undef MAT73 */

/* Matio major version number */
#define MATIO_MAJOR_VERSION 1

/* Matio minor version number */
#define MATIO_MINOR_VERSION 5

/* Matio release level number */
#define MATIO_RELEASE_LEVEL 2

/* Matio version number */
#define MATIO_VERSION 152

/* MATIO_PLATFORM is defined to "rmatio" when building. The define is not */
/* really used, since rmatio always use the argument hdr_str initialized */
/* from R with the correct platform when calling Mat_CreateVer */
#define MATIO_PLATFORM "rmatio"

#endif
