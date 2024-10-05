#-------------------------------------------------
#
# Project created by QtCreator 2024-10-05T12:43:56
#
#-------------------------------------------------

QT       += core gui


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PROJET
TEMPLATE = app


SOURCES += main.cpp\
        qetudiant.cpp \
    modelconnexion.cpp

HEADERS  += qetudiant.h \
    modelconnexion.h

FORMS    += qetudiant.ui

QT += sql
