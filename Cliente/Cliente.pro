#-------------------------------------------------
#
# Project created by QtCreator 2016-04-23T12:01:38
#
#-------------------------------------------------

QT       += core gui
QT       += sql
QT       += network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Cliente
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    perfil.cpp \
    ventanaprincipal.cpp \
    configure.cpp \
    my_socket_cliente.cpp \
    security.cpp \
    chatwindows.cpp


HEADERS  += login.h \
    perfil.h \
    ventanaprincipal.h \
    configure.h \
    my_socket_cliente.h \
    security.h \
    chatwindows.h

FORMS    += login.ui \
    ventanaprincipal.ui \
    configure.ui \
    perfil.ui \
    chatwindows.ui

PROTOS = protomessage.proto
include(protobuf.pri)
