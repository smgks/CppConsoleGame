#include "mainwindow.h"


MainWindow::MainWindow(BaseConsoleObject *parent) :
    BaseConsoleObject (parent)
{
    initscr();
    setCurs(0);
    refresh();
    CFrame *win = new CFrame(4*LINES/5, COLS/2, (LINES - 4*LINES/5)/2,COLS/4, this);
    printw("Hello World !!!");
    wins_.append(win);
    updateWins_();
    getch();
}

void MainWindow::initialize()
{

    update();
    updateWins_();

}

void MainWindow::reDraw()
{
    clear();
    initialize();
}

void MainWindow::update()
{
    refresh();
}

void MainWindow::clearWinsMem_()
{
    for (int i = 0; i < wins_.length(); ++i) {
        wins_.at(i)->ClearMem();
        delete wins_.at(i);
        wins_.pop_front();
    }
}

void MainWindow::updateWins_()
{
    for (int i = 0; i < wins_.size(); i++) {
        wins_.at(i)->initialize();
        wins_.at(i)->update();
    }
}

void MainWindow::setCurs(bool v)
{
    curs_set(v);
}


MainWindow::~MainWindow()
{
    clearWinsMem_();
    endwin();
}
