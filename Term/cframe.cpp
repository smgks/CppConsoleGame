#include "cframe.h"

CFrame::CFrame(QObject *parent)
    : BaseConsoleObject(parent)
{
    posX = 0;
    posY = 0;
}

CFrame::CFrame(qreal h_proc, qreal v_proc,
               qreal x_proc, qreal y_proc,
               QObject *parent)
    : BaseConsoleObject(parent)
{ 
    horizontal = h_proc;
    vertical = v_proc;
    posX = x_proc;
    posY = y_proc;
}

CFrame::~CFrame()
{
    delwin(win_);
}

void CFrame::update()
{
    wrefresh(win_);
}

void CFrame::initialize()
{
    win_ = newwin(int(LINES*vertical) , int(COLS*horizontal) ,
                  int(LINES*posY) , int(COLS*posX) );
    box(win_, 0, 0);
}

void CFrame::ClearMem()
{
    delwin(win_);
}
