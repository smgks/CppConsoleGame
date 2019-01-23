#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <ncurses.h>

class MainWindow : public QObject
{
    Q_OBJECT

public:
    explicit MainWindow(QObject *parent = nullptr);
    ~MainWindow();

private:
    void update_();
    QVector<WINDOW*> *wins;
    void clearWinVec_();
};

#endif // MAINWINDOW_H
