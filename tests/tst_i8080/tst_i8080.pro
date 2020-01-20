QT += core testlib

TARGET = tst_i8080

CONFIG += qt warn_on depend_includepath testcase console
CONFIG += c++11
DEFINES += SRCDIR=\\\"$$PWD/\\\"

INCLUDEPATH += $$PWD/../../retro80
DEPENDPATH  += $$PWD/../../retro80

TEMPLATE = app
HEADERS += \
         $$PWD/../../retro80/i8080.h
SOURCES += \
           Test_i8080.cpp \
         $$PWD/../../retro80/i8080.cpp

