#include "mainwindow.h"
#include <QApplication>
#include <QDebug>

// custom includes
#include "zstring.h"
#include "dbg_byzed.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    qDebug() << QString("").toInt();

    debug("hello Qt!%s", "xxx");




    return a.exec();
}
