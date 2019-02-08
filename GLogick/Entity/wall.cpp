#include "wall.h"

Wall::Wall(QObject *parent)
    :StaticObject(parent)
{
    isMovable = 0;
    ch = '#';
    color = ConsoleText::Color::BlueBlack;
}
