#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVector>
#include <ncurses.h>
#include "cframe.h"

class MainWindow : public BaseConsoleObject
{
    Q_OBJECT

public:
    explicit MainWindow(BaseConsoleObject  *parent = nullptr);
    ~MainWindow();
    void setCurs(bool v);
    void initialize();
    void reDraw();
    void update();
private:
    QVector<CFrame*> wins_;
    void clearWinsMem_();
    void updateWins_();
};

#endif // MAINWINDOW_H
