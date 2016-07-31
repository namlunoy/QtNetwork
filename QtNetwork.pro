QT += core
QT -= gui
QT += network

CONFIG += c++11

TARGET = QtNetwork
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
        mynetwork.cpp

HEADERS += \
        mynetwork.h

DISTFILES += \
    teample.html
