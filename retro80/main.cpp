#include <QApplication>
#include <QDebug>
#include <QDateTime>

#include "../app_version.h"

int main(int argc, char *argv[])
{
    //Q_INIT_RESOURCE(retro80_res);

    QApplication app(argc, argv);

    QString version = QString("%1.%2.%3 build [%4]")
            .arg(VER_MAJOR)
            .arg(GIT_VERSION)
            .arg(APP_COMMIT_COUNT)
            .arg(APP_TIME);

    qDebug() <<" version:" <<version;

    app.setApplicationName(QString("QT5 Retro80 computers emulator. ver:%1").arg(version));

    return app.exec();
}
