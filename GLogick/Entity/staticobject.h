#ifndef STATICOBJECT_H
#define STATICOBJECT_H

#include "sceneentity.h"

class StaticObject : public SceneEntity
{
public:
    StaticObject(QObject *parent = nullptr);
    bool isMovable;
};

#endif // STATICOBJECT_H
