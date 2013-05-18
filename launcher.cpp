#include "launcher.h"
#include <QCoreApplication>

Launcher::Launcher() {}
QDir Launcher::appdir(){
    QDir dir = QDir(QCoreApplication::applicationDirPath());
#ifdef Q_WS_MACX
    dir.cdUp();
    dir.cdUp();
    dir.cdUp();
#endif
    return dir;
}

void Launcher::initalize(){
    //make config file if not exists.

    //put rubyw.exe binary file from resource file if not exists.
}
