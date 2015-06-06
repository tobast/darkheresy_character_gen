#-------------------------------------------------
#
# Project created by QtCreator 2015-05-21T13:24:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = darkheresy_character_gen
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    CharacteristicDisplay.cpp \
    WeaponDisplay.cpp

HEADERS  += MainWindow.h \
    CharacteristicDisplay.h \
    WeaponDisplay.h

FORMS    += MainWindow.ui \
    CharacteristicDisplay.ui \
    WeaponDisplay.ui
