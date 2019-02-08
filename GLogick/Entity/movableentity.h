#ifndef MOVABLEENTITY_H
#define MOVABLEENTITY_H

#include "sceneentity.h"

class MovableEntity : public SceneEntity
{
    Q_OBJECT
public:
    MovableEntity(QObject *parent = nullptr);
    void setX(int x){posX = x;}
    int getX(){return posX;}
    void setY(int y){posY = y;}
    int getY(){return posY;}
protected:
    int posX;
    int posY;
};

#endif // MOVABLEENTITY_H
