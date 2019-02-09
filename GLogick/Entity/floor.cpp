#include "floor.h"

Floor::Floor(QObject *parent)
    : StaticObject(parent)
{
    ch = '.';
    color = ConsoleText::Color::WhiteBlack;
}
