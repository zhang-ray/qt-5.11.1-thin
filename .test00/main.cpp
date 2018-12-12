#include <QApplication>
#include <QtGlobal>
#include <QStandardPaths>
#include <QMainWindow>
#include "mainwindow.hpp"
//#include <QtPlugin>


//Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
//Q_IMPORT_PLUGIN(QStylePlugin)




int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}