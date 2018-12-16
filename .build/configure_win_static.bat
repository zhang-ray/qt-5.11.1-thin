CALL "C:\Program Files (x86)\Microsoft Visual Studio 14.0\Common7\Tools\VsDevCmd.bat"

configure -confirm-license -opensource -static -platform win32-msvc -mp -release   -strip                 -nomake examples -nomake tests           -no-feature-accessibility -no-feature-appstore-compliant -no-feature-big_codecs -no-feature-calendarwidget -no-feature-codecs -no-feature-commandlineparser -no-feature-completer -no-feature-gestures -no-feature-paint_debug
