TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        raumschiff.cpp \
        raumstation.cpp \
        rettungskapsel.cpp

HEADERS += \
    raumschiff.h \
    raumstation.h \
    rettungskapsel.h
