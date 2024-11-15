CONFIG      += plugin debug_and_release
TARGET      = $$qtLibraryTarget(xswitchbuttonplugin)
TEMPLATE    = lib

HEADERS     = xswitchbuttonplugin.h
SOURCES     = xswitchbuttonplugin.cpp
RESOURCES   = icons.qrc
LIBS        += -L. 

QT += designer

target.path = $$[QT_INSTALL_PLUGINS]/designer
INSTALLS    += target

include(xswitchbutton.pri)
