QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    class_and_object.cpp \
    edit_question.cpp \
    exercise.cpp \
    general.cpp \
    inh_poly.cpp \
    main.cpp \
    home.cpp \
    more_on_class.cpp

HEADERS += \
    class_and_object.h \
    edit_question.h \
    exercise.h \
    general.h \
    home.h \
    inh_poly.h \
    more_on_class.h

FORMS += \
    class_and_object.ui \
    edit_question.ui \
    exercise.ui \
    general.ui \
    home.ui \
    inh_poly.ui \
    more_on_class.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc

DISTFILES += \
    class_object.txt \
    general_Inhertance.txt \
    general_arr.txt \
    general_func.txt \
    general_pointers.txt \
    general_polymorphism.txt \
    questions_Inh_Poly.txt \
    questions_class_object.txt \
    questions_more_class.txt
