#include "consolereader.h"
#include <QTextStream>
ConsoleReader::ConsoleReader(QObject *parent)
    : QThread(parent)
{
    shutdown = 0;
}

void ConsoleReader::run()
{
//    QTextStream(stdout) << "starting thread";
    while (!shutdown) {
        emit keyPressSignal(getchar());
    }
}
