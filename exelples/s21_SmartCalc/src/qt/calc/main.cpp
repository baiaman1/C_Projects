#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();


    // ================
    MainWindow mainWindow;
    mainWindow.setGeometry(0, 0, 741, 440);
    mainWindow.show();
    // ================


    return a.exec();
}
