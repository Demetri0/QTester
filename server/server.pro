# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Add-in.
# ------------------------------------------------------

TEMPLATE = app
TARGET = Qtester
DESTDIR = ../Win32/Debug
QT += core sql network declarative widgets gui multimediawidgets
CONFIG += debug console
DEFINES += WIN64 QT_DLL QT_NETWORK_LIB QT_SQL_LIB QT_WIDGETS_LIB QT_DECLARATIVE_LIB QT_MULTIMEDIAWIDGETS_LIB
INCLUDEPATH += . \
    ./GeneratedFiles/Debug
DEPENDPATH += .
MOC_DIR += ./GeneratedFiles/debug
OBJECTS_DIR += debug
UI_DIR += ./GeneratedFiles
RCC_DIR += ./GeneratedFiles
include(server.pri)
