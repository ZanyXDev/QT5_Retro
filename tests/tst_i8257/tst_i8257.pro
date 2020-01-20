QT += core testlib

TARGET = tst_i8257

CONFIG += qt warn_on depend_includepath testcase console
CONFIG += c++11
DEFINES += SRCDIR=\\\"$$PWD/\\\"

INCLUDEPATH += $$PWD/../../retro80
DEPENDPATH  += $$PWD/../../retro80

TEMPLATE = app
HEADERS += \
         $$PWD/../../retro80/i8257.h
SOURCES += \
           Test_i8257.cpp \
         $$PWD/../../retro80/i8257.cpp

