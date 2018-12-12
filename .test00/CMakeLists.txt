cmake_minimum_required(VERSION 3.1.0)

project(test00)


if(WIN32)
    set(CMAKE_PREFIX_PATH "C:/Qt/Qt-5.11.1.release.shared")
    link_directories("C:/Qt/Qt-5.11.1.release.shared/lib")
    link_directories("C:/Qt/Qt-5.11.1.release.shared/plugins/platforms")
	link_directories("C:/Qt/Qt-5.11.1.release.shared/plugins/styles")
else(WIN32)
    if(APPLE AND EXISTS /usr/local/opt/qt5)
        # ensure it can be found by CMake since it is not in the default /usr/local prefix.
        list(APPEND CMAKE_PREFIX_PATH "/usr/local/opt/qt5")
    endif()
endif(WIN32)



# Find includes in corresponding build directories
set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Instruct CMake to run moc automatically when needed
set(CMAKE_AUTOMOC ON)
# Create code from a list of Qt designer ui files
set(CMAKE_AUTOUIC ON)



# Find the QtWidgets library
find_package(Qt5Widgets CONFIG REQUIRED)

# Populate a CMake variable with the sources
set(SRCS
    mainwindow.ui
    mainwindow.hpp
    main.cpp
)



if(WIN32)
    add_executable(${PROJECT_NAME} WIN32 ${SRCS} ${QRC_FILES})
else(WIN32)
    add_executable(${PROJECT_NAME} ${SRCS} ${QRC_FILES})
endif(WIN32)


if(WIN32)
    target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::WinMain
	qtharfbuzz qtlibpng qtmain qtpcre2 translator ws2_32 Netapi32 Mincore Winmm version qwindows Dwmapi d3d9 Imm32 dxguid
	libEGL libGLESv2 preprocessor Qt5Concurrent Qt5Core Qt5DBus Qt5DeviceDiscoverySupport Qt5EdidSupport Qt5EglSupport Qt5EventDispatcherSupport Qt5FbSupport Qt5FontDatabaseSupport Qt5Gui Qt5Network Qt5OpenGL Qt5OpenGLExtensions Qt5PlatformCompositorSupport Qt5PrintSupport Qt5Sql Qt5Test Qt5ThemeSupport Qt5Widgets Qt5WinExtras Qt5Xml qtfreetype qtharfbuzz qtlibpng qtmain qtpcre2 translator qwindowsvistastyle
	)
else(WIN32)
	if(${CMAKE_SYSTEM_NAME} STREQUAL "Darwin")
	    target_link_libraries(${PROJECT_NAME}
			Qt5::Widgets
			client_essential
			boost_system boost_system-mt 
			boost_log_setup boost_log_setup-mt 
			boost_log boost_log-mt 
			boost_filesystem boost_filesystem-mt 
			boost_thread-mt
			pthread
		)
    endif()
endif(WIN32)
