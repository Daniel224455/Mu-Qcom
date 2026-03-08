@echo off

armasm64 -nologo -PreDefine "REQUIRES_KERNEL_HEADER SETA %REQUIRES_KERNEL_HEADER%" -PreDefine "FD_BASE SETA %FD_BASE%" -PreDefine "FD_SIZE SETA %FD_SIZE%" BootShim.masm -o BootShim.obj > nul 2>&1
if %errorlevel% neq 0 ( echo Failed to assemble BootShim && exit /b 1 )

link /NODEFAULTLIB /ENTRY:_Head /SUBSYSTEM:NATIVE /MACHINE:ARM64 /BASE:0x100000000 /OUT:BootShim.tmp BootShim.obj > nul 2>&1
if %errorlevel% neq 0 ( echo Failed to link BootShim && exit /b 1 )

python3 ..\Resources\Scripts\pe2bin.py BootShim.tmp BootShim.bin > nul 2>&1
if %errorlevel% neq 0 ( echo Failed to strip PE header from BootShim && exit /b 1 )

del BootShim.obj BootShim.tmp > nul 2>&1