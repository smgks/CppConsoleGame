#ifndef CONSOLEREADER_H
#define CONSOLEREADER_H

#include <QThread>

class ConsoleReader : public QThread
{
    Q_OBJECT
signals:
    void keyPressSignal(int ch);
public:
    ConsoleReader(QObject *parent = nullptr);
    void run();
public slots:
    void shutdownThread(){ shutdown = 1;}
private:
    bool shutdown;
};

#endif // CONSOLEREADER_H
