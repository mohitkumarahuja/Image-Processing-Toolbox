#-------------------------------------------------
#
# Project created by QtCreator 2014-02-16T20:47:31
#
#-------------------------------------------------

cache()

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = VPOpenCVProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    pch.h \
    colorhistogram.h \
    histogram.h \
    linefinder.h \
    harrisDetector.h

FORMS    += mainwindow.ui

#INCLUDEPATH += C:\opencv-build\install\include
#LIBS += -LC:\opencv-build\install\x86\mingw\lib -lopencv_core -lopencv_imgproc -lopencv_highgui -lopencv_imgcodecs -lopencv_legacy


#-lopencv_legacy249d \
INCLUDEPATH += Eigen

#LIBS += -lQt5Concurrent

CONFIG += precompile_header

PRECOMPILED_HEADER = pch.h

RESOURCES += \
    ImageResources.qrc

INCLUDEPATH += C:\opencv-build\install\include
LIBS += -LC:\opencv-build\install\x86\mingw\lib \
    -lopencv_core320.dll \
    -lopencv_highgui320.dll \
    -lopencv_imgcodecs320.dll \
    -lopencv_imgproc320.dll \
    -lopencv_features2d320.dll \
    -lopencv_calib3d320.dll
