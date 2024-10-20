:: Flags for compilation
set "FLAGS="

:: C version (ISO/IEC 9899:2011)
set "FLAGS=%FLAGS% /std:c11"
:: Max info level
set "FLAGS=%FLAGS% /W4"
:: Max optimization (favor speed)
set "FLAGS=%FLAGS% /O2"
:: Max optimization (favor output size)
REM set "FLAGS=%FLAGS% /O1"

set "SOURCE_FILES=hello.c"
set "OUT_FILENAME=hello.exe"

cl %FLAGS% %SOURCE_FILES% /link /out:%OUT_FILENAME%