HEADERS       = ../connection.h \
                login.h \
                tableeditor.h
SOURCES       = main.cpp \
                login.cpp \
                tableeditor.cpp
QT           += sql widgets
requires(qtConfig(tableview))

# install
target.path = $$[QT_INSTALL_EXAMPLES]/sql/cachedtable
INSTALLS += target

FORMS += \
    login.ui

