#include "cchar.h"

CChar::CChar(char ch, int x, int y, QObject *parent)
    : BaseConsoleObject(parent)
{
    posX = x;
    posY = y;
}

void CChar::initialize()
{
    color_set(color,NULL);
    mvaddch(posY, posX, text);
}

void CChar::ClearMem()
{

}
