#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "basestate.h"
#include "Term/gamestateWin/gamewidget.h"

class GameState : public BaseState
{
    Q_OBJECT
public:
    GameState(QObject *parent = nullptr);
    void update();
public slots:
    void keyPressed(int);
private:
    GameWidget *temp;
};

#endif // GAMESTATE_H
