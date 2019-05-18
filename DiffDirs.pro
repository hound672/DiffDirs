# Qt applications and config
QT += core gui widgets
CONFIG += c++11 debug_and_release 
CONFIG -= app_bundle

include(DiffDirs.pri)
include(Core/Core.pri)

# defines
DEFINES += DEBUG_USE_UTC
DEFINES += QT_DEPRECATED_WARNINGS

# files in project
SOURCES += \
	App/main.cpp \
    Core/QDebugEx/QDebugEx.cpp \ 
    Core/QSettingsApp.cpp \
    Core/QSetupClass.cpp \
    App/QMainClass.cpp \
    Gui/Win/QMainWindowDiffDirs.cpp \
    DiffDirs/QDiffDirs.cpp

HEADERS += \
    Core/QDebugEx/QDebugEx.h \ 
    Core/QSettingsApp.h \
    Core/QSetupClass.h \
    App/QMainClass.h \
    Core/Includes.h \
    App/AppConfig.h \
    Gui/Win/QMainWindowDiffDirs.h \
    Collections/Interfaces.h \
    DiffDirs/QDiffDirs.h \
    Collections/Collections.h

DISTFILES += \
    Core/readme.MD

FORMS += \
    Gui/Win/QMainWindowDiffDirs.ui
