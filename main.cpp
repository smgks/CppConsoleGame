#include <QCoreApplication>
#include "Term/mainwindow.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MainWindow w;

    return a.exec();
}
