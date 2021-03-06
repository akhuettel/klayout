
include($$PWD/../../klayout.pri)

PRO_BASENAME = $$basename(_PRO_FILE_)
TARGET = $$replace(PRO_BASENAME, ".pro", "")
DESTDIR = $$OUT_PWD/../../..

include($$PWD/../../app.pri)

# Since the main function is entirely unspecific, we can put it into a common
# place - it's not part of the bd sources.
SOURCES = $$PWD/bd/main.cc

INCLUDEPATH += $$BD_INC
DEPENDPATH += $$BD_INC
LIBS += -L$$DESTDIR -lklayout_bd -lklayout_db -lklayout_tl -lklayout_gsi

DEFINES += BD_TARGET=$$TARGET
