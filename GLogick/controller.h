#ifndef CONTROLLER_H
#define CONTROLLER_H

#include "Entity/sceneentity.h"

class Controller
{
public:
    Controller();
    SceneEntity* collideOnPoint();
};

#endif // CONTROLLER_H
