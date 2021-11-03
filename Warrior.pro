TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Battle.cpp \
        Rules.cpp \
        Squad.cpp \
        Warrior.cpp \
        main.cpp

HEADERS += \
    Battle.h \
    IBattle.h \
    IRules.h \
    IScene.h \
    ISquad.h \
    IWarrior.h \
    Rules.h \
    Scene.h \
    Squad.h \
    Warrior.h
