/*++

Copyright (c) 2016 Pete Batard <pete@akeo.ie>

Module Name:

    eficompiler.h

Abstract:

    Compiler specific adjustments

--*/

#ifdef _MSC_EXTENSIONS
#define EFI_UNUSED
#else
#define EFI_UNUSED __attribute__((__unused__))
#endif

#ifdef _MSC_EXTENSIONS
#define EFI_ALIGN(x) __declspec(align(x))
#else
#define EFI_ALIGN(x) __attribute__((__aligned__(x)))
#endif

#ifndef ALIGN
#define ALIGN(x) EFI_ALIGN(x)
#endif

#ifdef _MSC_EXTENSIONS
#define EFI_NORETURN __declspec(noreturn)
#else
#define EFI_NORETURN __attribute__((noreturn))
#endif

/* Also add a catch-all on __attribute__() for MS compilers */
#ifdef _MSC_EXTENSIONS
#define __attribute__(x)
#endif
