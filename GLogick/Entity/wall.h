#ifndef WALL_H
#define WALL_H

#include "staticobject.h"

class Wall : public StaticObject
{
public:
    Wall(QObject *parent = nullptr);
};

#endif // WALL_H
