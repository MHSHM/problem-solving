@echo off
rem Usage:  .\run 07      build and test problem 07
rem         .\run all     build and test every problem
setlocal
set "ROOT=%~dp0"
if "%~1"=="" (
    echo Usage: .\run 07   or   .\run all
    exit /b 1
)

if not exist "%ROOT%build\build.ninja" (
    cmake --preset default -S "%ROOT%" >nul || exit /b 1
)

if /i "%~1"=="all" (
    cmake --build "%ROOT%build" || exit /b 1
    ctest --test-dir "%ROOT%build" --output-on-failure
    exit /b %errorlevel%
)

set "T="
for /r "%ROOT%" %%f in (%~1-*.test.cpp) do set "T=%%~nf"
if not defined T (
    echo No problem found for "%~1"
    exit /b 1
)
set "T=%T:.test=%"

cmake --build "%ROOT%build" --target %T% || exit /b 1
echo.
echo === %T% ===
"%ROOT%build\bin\%T%.exe"
