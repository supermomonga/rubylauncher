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
