#-------------------------------------------------
#
# Project created by QtCreator 2016-05-03T18:43:29
#
#-------------------------------------------------

QT       += core gui\
            multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = pd2-Taiko
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamewindow.cpp \
    informdialog.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    gamewindow.h \
    informdialog.h \
    dialog.h

FORMS    += mainwindow.ui \
    gamewindow.ui \
    informdialog.ui \
    dialog.ui

RESOURCES += \
    res.qrc
