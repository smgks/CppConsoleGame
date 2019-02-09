#include <QCoreApplication>
#include <QtTest/QTest>
#include "Term/mainwindow.h"

class MainTest : public QObject
{
    Q_OBJECT
public slots:
    void mainWin()
    {
        QCOMPARE(Floor().getCh(),'.');
    }
};

//QTEST_MAIN(MainTest);
//#include "maintest.moc"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MainWindow w;

    return a.exec();
}
