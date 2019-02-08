#include "mainwindow.h"
#include "consolecolor.h"

MainWindow::MainWindow(QObject *parent)
    : QObject(parent)
{

    initscr();
    setCurs(0);
    initColors();
    update();

    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTick()));
    timer->start(std::chrono::milliseconds(1000/30));

    reader = new ConsoleReader(this);
    connect(reader, SIGNAL(keyPressSignal(int)), this, SLOT(keyPressed(int)));
    connect(this, SIGNAL(shutdownReader()), reader, SLOT(shutdownThread()));
    reader->start();

    stateCntrl = new StateController(this);
    connect(this,SIGNAL(keyPressSignal(int)),stateCntrl,SLOT(keyPressed(int)));
    connect(this,SIGNAL(eventTick()),stateCntrl,SLOT(onTick()));
    update();
}

void MainWindow::update()
{   
    refresh();
}

void MainWindow::onTick()
{
    emit eventTick();
    update();
}

void MainWindow::keyPressed(int ch)
{
    emit keyPressSignal(ch);
}

void MainWindow::initColors()
{

    start_color();
    init_pair(ConsoleText::Color::WhiteBlack,
              COLOR_WHITE,COLOR_BLACK);
    init_pair(ConsoleText::Color::BlackWhite,
              COLOR_BLACK,COLOR_WHITE);
    init_pair(ConsoleText::Color::RedBlack,
              COLOR_RED,COLOR_BLACK);
    init_pair(ConsoleText::Color::BlackRed,
              COLOR_BLACK,COLOR_RED);
    init_pair(ConsoleText::Color::GreenGreen,
              COLOR_GREEN,COLOR_GREEN);
    init_pair(ConsoleText::Color::BlueBlack,
              COLOR_BLUE,COLOR_BLACK);
}

void MainWindow::setCurs(bool v)
{
    curs_set(v);
}

MainWindow::~MainWindow()
{
    emit shutdownReader();
    reader->wait();
    endwin();
}
