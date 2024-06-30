QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addnew.cpp \
    boom.cpp \
    distance.cpp \
    intropage.cpp \
    main.cpp \
    meals.cpp \
    models.cpp \
    openpage.cpp \
    recordpage.cpp \
    setpage.cpp \
    startpage.cpp

HEADERS += \
    addnew.h \
    boom.h \
    distance.h \
    intropage.h \
    meals.h \
    models.h \
    openpage.h \
    recordpage.h \
    setpage.h \
    startpage.h

FORMS += \
    addnew.ui \
    boom.ui \
    distance.ui \
    intropage.ui \
    openpage.ui \
    recordpage.ui \
    setpage.ui \
    startpage.ui

TRANSLATIONS += \
    canteen_roller_v0_zh_CN.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resouces.qrc
