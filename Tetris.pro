QT       += core gui
QT += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    CBoard.cpp \
    CTetrimino.cpp \
    cboard_expand.cpp \
    cboard_number.cpp \
    ctetrimino_expand.cpp \
    ctetrimino_number.cpp \
    higherplay.cpp \
    main.cpp \
    mainwindow.cpp \
    numberplay.cpp \
    setwindow.cpp \
    waychoice.cpp

HEADERS += \
    CBoard.h \
    CTetrimino.h \
    cboard_expand.h \
    cboard_number.h \
    ctetrimino_expand.h \
    ctetrimino_number.h \
    higherplay.h \
    mainwindow.h \
    numberplay.h \
    setwindow.h \
    waychoice.h

FORMS += \
    higherplay.ui \
    mainwindow.ui \
    numberplay.ui \
    setwindow.ui \
    waychoice.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
