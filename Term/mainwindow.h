#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QVector>
#include <ncurses.h>
#include "clabel.h"
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
    int getLines();
    int getCols();
private: 
    QVector<BaseConsoleObject*> wins_;
    void clearWinsMem_();
    void updateWins_();
    void initColors();
};

#endif // MAINWINDOW_H
