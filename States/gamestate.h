#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "basestate.h"
#include "Term/gamestateWin/gamewidget.h"
#include "GLogick/mapgenarator.h"
#include "GLogick/controller.h"

class GameState : public BaseState
{
    Q_OBJECT
public:
    GameState(QObject *parent = nullptr);
    void update();
public slots:
    void keyPressed(int);
    void onTick();
    void onPLayerDeath();
    void onGenerateNewMap();
signals:
    void eventTick();
private:
    GameWidget *temp;
    MapGenerator *mpGen;
    Controller *controller;
};

#endif // GAMESTATE_H
