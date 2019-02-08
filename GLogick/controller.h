#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Entity/sceneentity.h"

class Controller : QObject
{
public:
    Controller(QObject *parent = nullptr);
    SceneEntity* collideOnPoint();
};

#endif // CONTROLLER_H
