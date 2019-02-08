#include "menustate.h"

MenuState::MenuState(QObject *parent)
    :BaseState(parent)
{
    tmp = new MenuWidget(this);
}

void MenuState::update()
{
    tmp->update();
}

void MenuState::keyPressed(int ch)
{
    if (ch == 13) {
        tmp->hide();
        emit changeStateto(gameStates::Game);
    }
}
