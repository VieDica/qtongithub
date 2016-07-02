#-------------------------------------------------
#
# Project created by QtCreator 2016-06-29T15:32:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Draft
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    login.cpp \
    salesmanage.cpp \
    importgoods.cpp \
    stockmanage.cpp \
    personnelmanage.cpp \
    querymanage.cpp

HEADERS  += mainwindow.h \
    login.h \
    salesmanage.h \
    importgoods.h \
    stockmanage.h \
    personnelmanage.h \
    querymanage.h

FORMS    += mainwindow.ui \
    login.ui \
    salesmanage.ui \
    importgoods.ui \
    stockmanage.ui \
    personnelmanage.ui \
    querymanage.ui
