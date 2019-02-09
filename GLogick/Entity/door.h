#ifndef DOOR_H
#define DOOR_H

#include "staticobject.h"

class Door : public StaticObject
{
    Q_OBJECT
public:
    Door(QObject *parent = nullptr);
};

#endif // DOOR_H
