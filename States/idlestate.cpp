#include "idlestate.h"
#include <QCoreApplication>
IdleState::IdleState(QObject *parent)
    :BaseState(parent)
{
    idle = new IdleWidget(this);
    activeBtn = 0;
}

void IdleState::update()
{
    idle->update();
}

void IdleState::keyPressed(int ch)
{
    switch (ch) {
    case 's':
    case 'S':
    case 'w':
    case 'W':
        activeBtn = !activeBtn;
        idle->setActiveBtn(activeBtn);
        break;
    case 13:
        if (!activeBtn) {
            emit changeStateto(gameStates::Game);
            idle->hide();
        }
        else {
            idle->hide();
            QCoreApplication::exit(0);
        }
    default:
        break;
    }
}
