/* hdf/src/h4config.h.  Generated by configure.  */
/* hdf/src/h4config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to dummy `main' function (if any) required to link to the Fortran
   libraries. */
/* #undef H4_F77_DUMMY_MAIN */

/* Define to a macro mangling the given C identifier (in lower and upper
   case), which must not contain underscores, for linking with Fortran. */
#define H4_F77_FUNC(name,NAME) NAME

/* As F77_FUNC, but for C identifiers containing underscores. */
#define H4_F77_FUNC_(name,NAME) NAME ##_

/* Define to 1 if your Fortran compiler doesn't accept -c and -o together. */
/* #undef H4_F77_NO_MINUS_C_MINUS_O */

/* Define if F77 and FC dummy `main' functions are identical. */
/* #undef H4_FC_DUMMY_MAIN_EQ_F77 */

/* Define to 1 if you have the `fork' function. */
/* #undef H4_HAVE_FORK 1 */

/* Define to 1 if you have the <inttypes.h> header file. */
/* #undef H4_HAVE_INTTYPES_H */

/* Define to 1 if you have the <jpeglib.h> header file. */
#define H4_HAVE_JPEGLIB_H 1

/* Define to 1 if you have the `jpeg' library (-ljpeg). */
#define H4_HAVE_LIBJPEG 1

/* Define to 1 if you have the `sz' library (-lsz). */
// #define H4_HAVE_LIBSZ 1

/* Define to 1 if you have the `z' library (-lz). */
#define H4_HAVE_LIBZ 1

/* Define to 1 if you have the <memory.h> header file. */
#define H4_HAVE_MEMORY_H 1

/* Define if we support HDF NetCDF-3 APIs */
#define H4_HAVE_NETCDF 1

/* Define to 1 if you have the <stdint.h> header file. */
/* #undef H4_HAVE_STDINT_H */

/* Define to 1 if you have the <stdlib.h> header file. */
#define H4_HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
/* #undef H4_HAVE_STRINGS_H */

/* Define to 1 if you have the <string.h> header file. */
#define H4_HAVE_STRING_H 1

/* Define to 1 if you have the `system' function. */
#define H4_HAVE_SYSTEM 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define H4_HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define H4_HAVE_SYS_TYPES_H 1

/* Define if szip has encoder */
// #define H4_HAVE_SZIP_ENCODER 1

/* Define to 1 if you have the <szlib.h> header file. */
#define H4_HAVE_SZLIB_H 1

/* Define to 1 if you have the <unistd.h> header file. */
/* #undef H4_HAVE_UNISTD_H */

/* Define to 1 if you have the `vfork' function. */
/* #undef H4_HAVE_VFORK 1 */

/* Define to 1 if you have the `wait' function. */
/* #undef H4_HAVE_WAIT 1 */

/* Define to 1 if you have the <zlib.h> header file. */
#define H4_HAVE_ZLIB_H 1

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef H4_NO_MINUS_C_MINUS_O */

/* Name of package */
#define H4_PACKAGE "hdf"

/* Define to the address where bug reports for this package should be sent. */
#define H4_PACKAGE_BUGREPORT "help@hdfgroup.org"

/* Define to the full name of this package. */
#define H4_PACKAGE_NAME "HDF"

/* Define to the full name and version of this package. */
#define H4_PACKAGE_STRING "HDF 4.2.5"

/* Define to the one symbol short name of this package. */
#define H4_PACKAGE_TARNAME "hdf"

/* Define to the version of this package. */
#define H4_PACKAGE_VERSION "4.2.5"

/* The size of `int*', as computed by sizeof. */
#define H4_SIZEOF_INTP 4

/* Define to 1 if you have the ANSI C header files. */
#define H4_STDC_HEADERS 1

/* Version number of package */
#define H4_VERSION "4.2.5"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef H4_WORDS_BIGENDIAN */

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define H4_YYTEXT_POINTER 1

/* Visual Studio 2005 doesn't support size of setvbuf to be less than 1.
 * This is a hacking, we would like to wait for Visual Studio 2005 to fix this 
 * problem. */
#define HDsetvbuf(F,S,M,Z) (((Z)>1)?setvbuf(F,S,M,Z):setvbuf(F,S,M,2))
