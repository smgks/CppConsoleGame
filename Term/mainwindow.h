#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVector>
#include <QTextStream>
#include <QTimer>
#include <QKeyEvent>
#include "States/statecontroller.h"
#include "consolereader.h"

class MainWindow : public QObject
{
    Q_OBJECT
public:
    explicit MainWindow(QObject  *parent = nullptr);
    ~MainWindow();
    void setCurs(bool v);
    void update();
public slots:
    void onTick();
    void keyPressed(int ch);
signals:
    void shutdownReader();
    void keyPressSignal(int ch);
    void eventTick();
    void resizeEvent();
private: 
    void initColors();
    QTimer *timer;
    ConsoleReader *reader;
    StateController *stateCntrl;
};

#endif // MAINWINDOW_H
