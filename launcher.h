#ifndef LAUNCHER_H
#define LAUNCHER_H
#include <QDir>

class Launcher
{
public:
    Launcher();
    QDir appdir();
    void initalize();
};

#endif // LAUNCHER_H
