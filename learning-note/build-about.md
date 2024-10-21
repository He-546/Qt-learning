# build about

## qmake variable

### Project Configuration:

```shell
TEMPLATE = app  # Specifies the project type (app, lib, subdirs)
TARGET = MyApp  # Name of the output (executable or library)
CONFIG += c++11  # Adds configuration options (e.g., C++11 support)
QT += core gui widgets  # Qt modules to use
```

### Source Files:

```shell
SOURCES += main.cpp mainwindow.cpp
HEADERS += mainwindow.h
FORMS += mainwindow.ui
RESOURCES += resources.qrc
```

### Directories:

```shell
# PWD (Present Working Directory) is a qmake variable that refers to the directory containing the currently processed .pro file
DESTDIR = $$PWD/bin  # Output directory for the final target
OBJECTS_DIR = $$PWD/build/obj  # For object files
MOC_DIR = $$PWD/build/moc  # For moc files
RCC_DIR = $$PWD/build/rcc  # For resource files
UI_DIR = $$PWD/build/ui  # For UI files
```

### include Paths and libraries:

```shell
INCLUDEPATH += $$PWD/include
LIBS += -L$$PWD/lib -lmylib
```

### Conditional Compilation:

```shell
CONFIG(debug, debug|release) {
    DEFINES += DEBUG
} else {
    DEFINES += QT_NO_DEBUG_OUTPUT
}
```


## build location setting in xx.pro

```shell
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

# Optionally, set a directory for generated files
GENERATED_DIR = $$BUILD_DIR/$$BUILD_SUBDIR/generated
```
