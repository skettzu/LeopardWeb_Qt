HEADERS       = ../connection.h \
                admin.h \
                instructor.h \
                login.h \
                student.h \
                tableeditor.h \
                user.h
SOURCES       = main.cpp \
                admin.cpp \
                instructor.cpp \
                login.cpp \
                student.cpp \
                tableeditor.cpp \
                user.cpp
QT           += sql widgets
requires(qtConfig(tableview))

# install
target.path = $$[QT_INSTALL_EXAMPLES]/sql/cachedtable
INSTALLS += target

FORMS += \
    login.ui

