#-------------------------------------------------
#
# Project created by QtCreator 2013-05-18T14:37:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = rubylauncher
TEMPLATE = app


SOURCES += main.cpp \
    launcher.cpp \
    updatedialog.cpp

HEADERS  += \
    launcher.h \
    updatedialog.h

FORMS    += updatedialog.ui

OTHER_FILES += \
    README.mkd
