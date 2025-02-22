/* Manually adapted for Android.

Copyright (C) 2023 Free Software Foundation, Inc.

These modifications are part of GNU Emacs.

GNU Emacs is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your
option) any later version.

GNU Emacs is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Emacs.  If not, see <https://www.gnu.org/licenses/>. */

/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
#undef CRAY_STACKSEG_END

/* Define to 1 if using `alloca.c'. */
#undef C_ALLOCA

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* Define if __builtin_bswap64 is available */
#undef HAVE_BUILTIN_BSWAP64

/* Define if clock_gettime is available */
#define HAVE_CLOCK_GETTIME 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if fcntl file locking is available */
#undef HAVE_FCNTL_LOCKING

/* Define if the compiler understands __attribute__ */
#define HAVE_GCC_ATTRIBUTE 1

/* Define to 1 if you have the `getline' function. */
#undef HAVE_GETLINE

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have dlopen (with -ldl). */
#define HAVE_LIBDL 1

/* Define to 1 if you have the `gmp' library (-lgmp). */
#define HAVE_LIBGMP 1

/* Define if compiler and linker supports __attribute__ ifunc */
#undef HAVE_LINK_IFUNC

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 each of the following for which a native (ie. CPU specific)
    implementation of the corresponding routine exists.  */
#undef HAVE_NATIVE_memxor3
#undef HAVE_NATIVE_aes_decrypt
#undef HAVE_NATIVE_aes_encrypt
#undef HAVE_NATIVE_aes128_decrypt
#undef HAVE_NATIVE_aes128_encrypt
#undef HAVE_NATIVE_aes128_invert_key
#undef HAVE_NATIVE_aes128_set_decrypt_key
#undef HAVE_NATIVE_aes128_set_encrypt_key
#undef HAVE_NATIVE_aes192_decrypt
#undef HAVE_NATIVE_aes192_encrypt
#undef HAVE_NATIVE_aes192_invert_key
#undef HAVE_NATIVE_aes192_set_decrypt_key
#undef HAVE_NATIVE_aes192_set_encrypt_key
#undef HAVE_NATIVE_aes256_decrypt
#undef HAVE_NATIVE_aes256_encrypt
#undef HAVE_NATIVE_aes256_invert_key
#undef HAVE_NATIVE_aes256_set_decrypt_key
#undef HAVE_NATIVE_aes256_set_encrypt_key
#undef HAVE_NATIVE_cbc_aes128_encrypt
#undef HAVE_NATIVE_cbc_aes192_encrypt
#undef HAVE_NATIVE_cbc_aes256_encrypt
#undef HAVE_NATIVE_chacha_core
#undef HAVE_NATIVE_chacha_2core
#undef HAVE_NATIVE_chacha_3core
#undef HAVE_NATIVE_chacha_4core
#undef HAVE_NATIVE_fat_chacha_2core
#undef HAVE_NATIVE_fat_chacha_3core
#undef HAVE_NATIVE_fat_chacha_4core
#undef HAVE_NATIVE_ecc_curve25519_modp
#undef HAVE_NATIVE_ecc_curve448_modp
#undef HAVE_NATIVE_ecc_secp192r1_modp
#undef HAVE_NATIVE_ecc_secp192r1_redc
#undef HAVE_NATIVE_ecc_secp224r1_modp
#undef HAVE_NATIVE_ecc_secp224r1_redc
#undef HAVE_NATIVE_ecc_secp256r1_modp
#undef HAVE_NATIVE_ecc_secp256r1_redc
#undef HAVE_NATIVE_ecc_secp384r1_modp
#undef HAVE_NATIVE_ecc_secp384r1_redc
#undef HAVE_NATIVE_ecc_secp521r1_modp
#undef HAVE_NATIVE_ecc_secp521r1_redc
#undef HAVE_NATIVE_ghash_set_key
#undef HAVE_NATIVE_ghash_update
#undef HAVE_NATIVE_salsa20_core
#undef HAVE_NATIVE_salsa20_2core
#undef HAVE_NATIVE_fat_salsa20_2core
#undef HAVE_NATIVE_sha1_compress
#undef HAVE_NATIVE_sha256_compress
#undef HAVE_NATIVE_sha512_compress
#undef HAVE_NATIVE_sha3_permute
#undef HAVE_NATIVE_umac_nh
#undef HAVE_NATIVE_umac_nh_n

/* Define to 1 if you have the <openssl/ecdsa.h> header file. */
#undef HAVE_OPENSSL_ECDSA_H

/* Define to 1 if you have the <openssl/evp.h> header file. */
#undef HAVE_OPENSSL_EVP_H

/* Define to 1 if you have the `secure_getenv' function. */
#undef HAVE_SECURE_GETENV

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the <valgrind/memcheck.h> header file. */
#undef HAVE_VALGRIND_MEMCHECK_H

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "bug-gnu-emacs@gnu.org"

/* Define to the full name of this package. */
#define PACKAGE_NAME "Nettle (for GNU Emacs)"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "Nettle 3.8 (for GNU Emacs)"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "nettle-3.8-emacs"

/* Define to the home page for this package. */
#define PACKAGE_URL "https://gnu.org/software/nettle"

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.8"

/* The size of `long', as computed by sizeof. */
/* #undef SIZEOF_LONG DEFINED IN Android.mk */

/* The size of `size_t', as computed by sizeof. */
/* #undef SIZEOF_SIZE_T DEFINED IN Android.mk */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
#undef STACK_DIRECTION

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME

/* Defined if public key features are enabled */
#define WITH_HOGWEED

/* Define if you have openssl's libcrypto (used for benchmarking) */
#undef WITH_OPENSSL

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to empty if `const' does not conform to ANSI C. */
#undef const

/* Define to `int' if <sys/types.h> doesn't define. */
#undef gid_t

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
#undef inline
#endif

/* Define to `unsigned int' if <sys/types.h> does not define. */
#undef size_t

/* Define to `int' if <sys/types.h> doesn't define. */
#undef uid_t

/* AIX requires this to be the first thing in the file.  */
#ifndef __GNUC__
# if HAVE_ALLOCA_H
#  include <alloca.h>
# else
#  ifdef _AIX
 #pragma alloca
#  else
#   ifndef alloca /* predefined by HP cc +Olibcalls */
char *alloca ();
#   endif
#  endif
/* Needed for alloca on windows */
#  if HAVE_MALLOC_H
#   include <malloc.h>
#  endif
# endif
#else /* defined __GNUC__ */
# if HAVE_ALLOCA_H
#  include <alloca.h>
# else
/* Needed for alloca on windows, also with gcc */
#  if HAVE_MALLOC_H
#   include <malloc.h>
#  endif
# endif
#endif


#if HAVE_STRERROR
#define STRERROR strerror
#else
#define STRERROR(x) (sys_errlist[x])
#endif


#if __GNUC__ && HAVE_GCC_ATTRIBUTE
# define NORETURN __attribute__ ((__noreturn__))
# define PRINTF_STYLE(f, a) __attribute__ ((__format__ (__printf__, f, a)))
# define UNUSED __attribute__ ((__unused__))
#else
# define NORETURN
# define PRINTF_STYLE(f, a)
# define UNUSED
#endif


#if defined(__x86_64__) || defined(__arch64__)
# define HAVE_NATIVE_64_BIT 1
#else
/* Needs include of <limits.h> before use. */
# define HAVE_NATIVE_64_BIT (SIZEOF_LONG * CHAR_BIT >= 64)
#endif

