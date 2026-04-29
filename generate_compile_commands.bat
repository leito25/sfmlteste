@echo off
echo Generating compile_commands.json...
cmake -S . -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
copy build\compile_commands.json .
echo Done!
pause