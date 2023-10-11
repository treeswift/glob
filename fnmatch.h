#ifndef _FNMATCH_H_
#define _FNMATCH_H_

#define FNM_NOESCAPE    0x1  /* similar to GLOB_NOESCAPE */
#define FNM_PATHNAME    0x2
#define FNM_PERIOD      0x4

#define FNM_LEADING_DIR 0x10
#define FNM_CASEFOLD    0x20

#define FNM_IGNORECASE  FNM_CASEFOLD
#define FNM_FILE_NAME   FNM_PATHNAME

#define FNM_EXTMATCH    0x40 /* ksh-style -- unsupported */

#define FNM_NOMATCH 1 /* retval if no error and no match */
#define FNM_NOSYS   2 /* function not supported (unused) */
#define FNM_NOFLAG -2 /* flag not supported */
#define FNM_ERROR  -1 /* any other error; arbitrary name */

/* __BEGIN_DECLS */
#ifdef __cplusplus
extern "C" {
#endif

int fnmatch(const char *needle, const char *haystack, int flags);

 /* __END_DECLS */
#ifdef __cplusplus
}
#endif

#endif /* _FNMATCH_H */
