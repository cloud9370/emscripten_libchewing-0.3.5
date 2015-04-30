/* include/config.h.  Generated from config.h.in by configure.  */
/* include/config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Define to 1 if you have the `asprintf' function. */
#define HAVE_ASPRINTF 1

/* Define to 1 if a SysV or X/Open compatible Curses library is present */
/* #undef HAVE_CURSES */

/* Define to 1 if library supports color (enhanced functions) */
/* #undef HAVE_CURSES_COLOR */

/* Define to 1 if library supports X/Open Enhanced functions */
/* #undef HAVE_CURSES_ENHANCED */

/* Define to 1 if <curses.h> is present */
/* #undef HAVE_CURSES_H */

/* Define to 1 if library supports certain obsolete features */
/* #undef HAVE_CURSES_OBSOLETE */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if your system has a GNU libc compatible `malloc' function, and
   to 0 otherwise. */
#define HAVE_MALLOC 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a working `mmap' system call. */
/* #undef HAVE_MMAP */

/* Define to 1 if the Ncurses library is present */
/* #undef HAVE_NCURSES */

/* Define to 1 if the NcursesW library is present */
/* #undef HAVE_NCURSESW */

/* Define to 1 if <ncursesw/curses.h> is present */
/* #undef HAVE_NCURSESW_CURSES_H */

/* Define to 1 if <ncursesw.h> is present */
/* #undef HAVE_NCURSESW_H */

/* Define to 1 if <ncurses/curses.h> is present */
/* #undef HAVE_NCURSES_CURSES_H */

/* Define to 1 if <ncurses.h> is present */
/* #undef HAVE_NCURSES_H */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtok_r' function. */
#define HAVE_STRTOK_R 1

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* The binary version of libchewing. */
#define LIBCHEWING_BINARY_VERSION "1.0.0"

/* The release version of libchewing. */
#define LIBCHEWING_VERSION "0.3.5"

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Name of package */
#define PACKAGE "libchewing"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "chewing-devel@googlegroups.com"

/* Define to the full name of this package. */
#define PACKAGE_NAME "libchewing"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "libchewing 0.3.5"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "libchewing"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.3.5"

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Runtime is under POSIX environment */
#define UNDER_POSIX 1

/* Runtime is under Win32 environment */
/* #undef UNDER_WINDOWS */

/* Experimental use of binary data */
#define USE_BINARY_DATA 1

/* Version number of package */
#define VERSION "0.3.5"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to rpl_malloc if the replacement function should be used. */
/* #undef malloc */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to the type of an unsigned integer type of width exactly 16 bits if
   such a type exists and the standard includes do not define it. */
/* #undef uint16_t */
