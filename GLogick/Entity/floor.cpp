#include "floor.h"

Floor::Floor(QObject *parent)
    : StaticObject(parent)
{
    isMovable = 1;
    ch = '.';
    color = ConsoleText::Color::WhiteBlack;
}
