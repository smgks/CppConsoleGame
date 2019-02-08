#include "menuwidget.h"

MenuWidget::MenuWidget(QObject *parent)
    : BaseWidget(parent)
{
    menuFrame = new CFrame(1/2., 1/2.,
                           1/4., 1/4.,
                           this);
    coVec.push_back(menuFrame);
    menuButton = new CLabel(">START<",
                            1/2., 1/2.,
                            this);
    menuButton->setOffsetX(-3);
    menuButton->setColor(ConsoleText::Color::BlackRed);
    coVec.push_back(menuButton);
}
