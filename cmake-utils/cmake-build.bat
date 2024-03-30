@echo off

:: ########## Variables ###############
set build_relative_path=Build
set "cmake_generator="MinGW Makefiles""
:: ####################################

set build_path=%~dp0%build_relative_path%
set install_path=%build_path%\Install 

IF EXIST "%build_path%" (
    cd /d %build_path%
    for /F "delims=" %%i in ('dir /b') do (rmdir "%%i" /s/q 2> NUL || del "%%i" /s/q > NUL)
    mkdir %install_path%
)
cd %~dp0
cmake -G %cmake_generator% -B %build_path% --install-prefix %install_path%
cmake --build %build_path%