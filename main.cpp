#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication Qt_OpenCV_GUI(argc, argv);
    MainWindow mainWindow;
    mainWindow.show();
    
    return Qt_OpenCV_GUI.exec();
}
