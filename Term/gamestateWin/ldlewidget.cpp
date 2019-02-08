#include "ldlewidget.h"

IdleWidget::IdleWidget(QObject *parent)
    : BaseWidget(parent)
{
    menuFrame = new CFrame(1/2., 1/2.,
                           1/4., 1/4.,
                           this);
    coVec.push_back(menuFrame);

    resumeButton =  new CLabel("Resume",
                               1/2.,1/2.,
                               this);
    resumeButton->setOffsetX(-3);
    resumeButton->setOffsetY(-2);
    resumeButton->setColor(ConsoleText::Color::BlackRed);
    coVec.push_back(resumeButton);

    extButton = new CLabel("Exit",
                           1/2.,1/2.,
                           this);
    extButton->setOffsetX(-2);
    extButton->setOffsetY(2);
    extButton->setColor(ConsoleText::Color::RedBlack);
    coVec.push_back(extButton);

}

void IdleWidget::setActiveBtn(int btn)
{
    if (btn){
        resumeButton->setColor(ConsoleText::Color::RedBlack);
        extButton->setColor(ConsoleText::Color::BlackRed);
    }
    else {
        resumeButton->setColor(ConsoleText::Color::BlackRed);
        extButton->setColor(ConsoleText::Color::RedBlack);
    }
}
