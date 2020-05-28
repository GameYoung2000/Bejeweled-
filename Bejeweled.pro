#-------------------------------------------------
#
# Project created by QtCreator 2020-05-19T14:20:46
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
QT       += multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Bejeweled
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
    icon.cpp \
        main.cpp \
        mainwindow.cpp \
    game.cpp \
    login.cpp \
    zhuce.cpp \
    chenggong.cpp \
    menu.cpp \
    rank.cpp \
    setting.cpp \
    help.cpp

HEADERS += \
    icon.h \
        mainwindow.h \
    game.h \
    login.h \
    zhuce.h \
    chenggong.h \
    menu.h \
    rank.h \
    setting.h \
    help.h

FORMS += \
        mainwindow.ui \
    game.ui \
    login.ui \
    game.ui \
    login.ui \
    zhuce.ui \
    chenggong.ui \
    menu.ui \
    rank.ui \
    setting.ui \
    help.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
