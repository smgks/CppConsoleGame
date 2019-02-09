#include "wall.h"

Wall::Wall(QObject *parent)
    :StaticObject(parent)
{
    ch = '#';
    color = ConsoleText::Color::BlueBlack;
}
