#include "gamewidget.h"

GameWidget::GameWidget(Map *mp, QObject *parent)
    :BaseWidget(parent)
{
    map = mp;
    mapField = new CFrame(4/5., 1.,
                     0, 0,
                     this);
    mapScene = new CChar(map,
                         1,1,
                         this);

    stateBar = new CFrame(1. - 4/5., 1,
                          4/5., 0,
                          this);
    stateBar->setOffsetX(1);
    coVec.push_back(stateBar);
    coVec.push_back(mapScene);
    coVec.push_back(mapField);
}
