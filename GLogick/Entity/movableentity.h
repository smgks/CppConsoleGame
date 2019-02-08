#ifndef MOVABLEENTITY_H
#define MOVABLEENTITY_H

#include "sceneentity.h"

class MovableEntity : public SceneEntity
{
    Q_OBJECT
public:
    MovableEntity(QObject *parent = nullptr);
};

#endif // MOVABLEENTITY_H
