
DESTDIR_KLP = $$OUT_PWD/../../..
DESTDIR = $$OUT_PWD/..

include($$PWD/../klayout.pri)

TEMPLATE = lib

INCLUDEPATH += $$DB_INC $$TL_INC $$GSI_INC $$LAYBASIC_INC $$LAY_INC
DEPENDPATH += $$DB_INC $$TL_INC $$GSI_INC $$LAYBASIC_INC $$LAY_INC
LIBS += -L$$DESTDIR_KLP -lklayout_db -lklayout_tl -lklayout_gsi -lklayout_laybasic -lklayout_lay

# Only on Windows, DESTDIR_TARGET is usable. On this platform, a blank happens to appear between
# $(DESTDIR) and $(TARGET)
win32 {

  QMAKE_POST_LINK += $(COPY) $(DESTDIR_TARGET) $$DESTDIR_KLP/$${TARGET}.klp

  # to avoid the major version being appended to the dll name - in this case -lxyz won't link it again
  # because the library is called xyx0.dll.
  CONFIG += skip_target_version_ext

} else {
  QMAKE_POST_LINK += $(COPY) $(DESTDIR)$(TARGET) $$DESTDIR_KLP/$${TARGET}.klp
}
