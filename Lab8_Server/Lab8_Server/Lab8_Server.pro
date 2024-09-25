QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    conversation_info.cpp \
    conversation_info_factory.cpp \
    database_fasade.cpp \
    main.cpp \
    mainwindow.cpp \
    server.cpp \
    user_info.cpp

HEADERS += \
    abstract_chat_info.h \
    abstract_chat_info_factory.h \
    conversation_info.h \
    conversation_info_factory.h \
    database_fasade.h \
    mainwindow.h \
    server.h \
    user_info.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
