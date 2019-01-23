#include "cframe.h"

CFrame::CFrame(int v_lines, int h_colums, int x, int y, QObject *parent) : QObject(parent)
{ 
    horizontal = h_colums;
    vertical = v_lines;
    posX = x;
    posY = y;

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
    win_ = newwin(vertical,horizontal,posX,posY);
    box(win_, 0, 0);
}

void CFrame::ClearMem()
{
    delwin(win_);
}
