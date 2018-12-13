#include <QApplication>
#include <QtGlobal>
#include <QStandardPaths>
#include <QMainWindow>
#include "mainwindow.hpp"
#include <QtPlugin>


#ifdef _WIN32
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
#elif defined __APPLE__
Q_IMPORT_PLUGIN(QCocoaIntegrationPlugin)
#endif





int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
