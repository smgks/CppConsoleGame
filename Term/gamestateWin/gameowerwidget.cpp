#include "gameowerwidget.h"

GameOwerWidget::GameOwerWidget(QObject *parent)
    : BaseWidget(parent)
{
    gameOverL = new CLabel("YOU DEAD",
                            1/2., 1/2.,
                            this);
    gameOverL->setOffsetX(-4);
    gameOverL->setColor(ConsoleText::Color::BlackRed);
    coVec.append(gameOverL);
}
