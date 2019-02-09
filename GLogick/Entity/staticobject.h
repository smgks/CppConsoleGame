#ifndef STATICOBJECT_H
#define STATICOBJECT_H

#include "sceneentity.h"

class StaticObject : public SceneEntity
{
public:
    StaticObject(QObject *parent = nullptr);
};

#endif // STATICOBJECT_H
