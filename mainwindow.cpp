#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"


MainWindow::MainWindow(QObject *parent) :
    QObject(parent)
{
    WINDOW *win = newwin(5,5,0,0);
    wins = new QVector<WINDOW*>;
    initscr();
    printw("Hello World !!!");
    refresh();
    getch();
    endwin();
}

void MainWindow::update_()
{

}

void MainWindow::clearWinVec_()
{
    for (int i = wins->length(); i >= 0; --i) {
        delete wins->at(i);
        wins->pop_back();
    }
}

MainWindow::~MainWindow()
{
    wins->clear();
    delete wins;
}
