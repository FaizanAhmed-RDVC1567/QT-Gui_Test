QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    batterywidget.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    batterywidget.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

# Adding the necessary inclyde paths for the Windows SDK
INCLUDEPATH += "C:/Program Files (x86)/Windows Kits/10/Include/10.0.26100.0/um"
INCLUDEPATH += "C:/Program Files (x86)/Windows Kits/10/Include/10.0.26100.0/shared"
INCLUDEPATH += "C:/Program Files (x86)/Windows Kits/10/Include/10.0.26100.0/ucrt"
INCLUDEPATH += "C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\BuildTools\\VC\\Tools\\MSVC\\14.29.30133\\include"

# These lines are to add the necessary library paths
win32:CONFIG(release, debug|release): LIBS += -lUser32
win32:CONFIG(debug, debug|release): LIBS += -lUser32
