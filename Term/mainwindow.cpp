#include "mainwindow.h"
#include "consolecolor.h"
MainWindow::MainWindow(BaseConsoleObject *parent) :
    BaseConsoleObject (parent)
{
    initscr();
    setCurs(0);
    refresh();
    initColors();
    CFrame *win = new CFrame(4*LINES/5, COLS/2, (LINES - 4*LINES/5)/2,COLS/4, this);
    printw("Hello World !!!");
    CLabel *textlb = new CLabel("xui",LINES/2,COLS/2);
    textlb->setColor(ConsoleText::Color::R_StandartText);
    wins_.append(win);

    wins_.append(textlb);
    updateWins_();
    reDraw();
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
    updateWins_();
}

void MainWindow::update()
{
    refresh();
}

int MainWindow::getLines()
{
    return LINES;
}

int MainWindow::getCols()
{
    return COLS;
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

void MainWindow::initColors()
{
    start_color();
    init_pair(ConsoleText::Color::StarnartText,COLOR_WHITE,COLOR_BLACK);
    init_pair(ConsoleText::Color::R_StandartText,COLOR_BLACK,COLOR_WHITE);
    init_pair(ConsoleText::Color::RedBlack,COLOR_RED,COLOR_BLACK);
    init_pair(ConsoleText::Color::R_RedBlack,COLOR_BLACK,COLOR_RED);
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
