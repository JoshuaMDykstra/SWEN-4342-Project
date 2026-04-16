//main.cpp
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //create qapplication instance
    MainWindow w; //create main window instance
    w.show(); //draw main window
    return QCoreApplication::exec(); //run qapplication
}
