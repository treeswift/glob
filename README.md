# glob
Android glob 

The glob() function searches for all the pathnames matching pattern on the Android platform.

<glob.h> keeps compatibility with glibc.

# fnmatch
fnmatch() matches file and path names against the provided pattern without accessing the disk.

<fnmatch.h> maintains macro (constant) compatibility with both glibc and openbsd, but without
matching numeric equivalence (as constant values in them themselves diverge).
