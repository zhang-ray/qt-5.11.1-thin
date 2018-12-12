CALL "C:\Program Files (x86)\Microsoft Visual Studio 14.0\Common7\Tools\VsDevCmd.bat"
mkdir test00-build
cd test00-build
cmake -G "Visual Studio 14 2015" ..\.test00
msbuild "/m" "/p:Configuration=Release" "/consoleloggerparameters:ErrorsOnly" test00.sln
cd ..
