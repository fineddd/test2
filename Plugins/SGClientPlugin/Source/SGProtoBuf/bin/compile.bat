@echo off

setlocal enabledelayedexpansion


@echo on
for /r %%i in (*.proto) do (
    protoc.exe -I=./ --cpp_out=dllexport_decl=SGPROTOBUF_API:./ ./%%~nxi
)
move /Y  .\*.pb.h ..\Public
move /Y  .\*.pb.cc ..\Private


echo "Finished."

pause