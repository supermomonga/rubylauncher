#include "mainwindow.h"
#include "launcher.h"
#include <QApplication>
#include <QDir>
#include <QProcess>
#include <QDebug>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Launcher launcher;
    QString path = launcher.appdir().path();
    qDebug() << path;


    QProcess process;
    //process.start("ruby");

    return a.exec();
}
