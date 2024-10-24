#-------------------------------------------------
#
# Project created by QtCreator 2024-10-21T20:32:09
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = spreadsheet
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    finddialog.cpp \
    spreadsheet.cpp \
    cell.cpp

HEADERS += \
        mainwindow.h \
    finddialog.h \
    spreadsheet.h \
    cell.h

FORMS += \
        mainwindow.ui \
    finddialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


# Base build directory
BUILD_DIR = $$PWD/build

# Configuration-specific subdirectories
CONFIG(debug, debug|release) {
    BUILD_SUBDIR = debug
} else {
    BUILD_SUBDIR = release
}

# Set the main build directory
DESTDIR = $$BUILD_DIR/$$BUILD_SUBDIR

# Set directories for intermediate files
OBJECTS_DIR = $$BUILD_DIR/$$BUILD_SUBDIR/obj
MOC_DIR = $$BUILD_DIR/$$BUILD_SUBDIR/moc
RCC_DIR = $$BUILD_DIR/$$BUILD_SUBDIR/rcc
UI_DIR = $$BUILD_DIR/$$BUILD_SUBDIR/ui
