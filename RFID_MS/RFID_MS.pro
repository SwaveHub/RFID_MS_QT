QT       += core gui
QT       += sql
QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

DESTDIR = $$PWD/../bin

include($$PWD/ui/ui.pri)
include($$PWD/lib/lib.pri)

DISTFILES +=

RESOURCES += \
    res/res.qrc

RC_ICONS = RFID_MS.ico
