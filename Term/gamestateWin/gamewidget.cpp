#include "gamewidget.h"
#include "GLogick/Entity/charecter.h"
GameWidget::GameWidget(Map *mp, QObject *parent)
    :BaseWidget(parent)
{
    map = mp;
    mapField = new CFrame(1., 1.,
                     0, 0,
                     this);
    mapScene = new CChar(map,
                         1,1,
                         this);

    charecterHP = new CLabel("HP: "
                             + QString::number(static_cast<Charecter*>(
                                                   mp->dynamicObjects[0])->getHP()),
                             4/5.,0,
                             this);
    charecterHP->setOffsetX(2);
    charecterHP->setColor(ConsoleText::RedBlack);
    coVec.push_back(mapScene);
    coVec.push_back(charecterHP);
    coVec.push_back(mapField);
}

void GameWidget::update()
{
    charecterHP->setText("HP: "
                         + QString::number(static_cast<Charecter*>(
                                               map->dynamicObjects[0])->getHP()));
    hide();
    show();
}
