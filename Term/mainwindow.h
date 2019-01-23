#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVector>
#include <ncurses.h>
#include "cframe.h"

class MainWindow : public QObject
{
    Q_OBJECT

public:
    explicit MainWindow(QObject *parent = nullptr);
    ~MainWindow();
    void setCurs(bool v);
    void initialize();
    void reDraw();
private:
    void update_();
    QVector<CFrame*> wins_;
    void clearWinsMem_();
    void updateWins_();
};

#endif // MAINWINDOW_H
