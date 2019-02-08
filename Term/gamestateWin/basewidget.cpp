#include "basewidget.h"

BaseWidget::BaseWidget(QObject *parent)
    : QObject(parent)
{

}

void BaseWidget::update()
{
    hide();
    show();
}

void BaseWidget::hide()
{
    for (BaseConsoleObject* i: coVec) {
        i->ClearMem();
    }
    clear();
}

void BaseWidget::show()
{
    refresh();
    for (BaseConsoleObject* i: coVec) {
        i->initialize();
        i->update();
    }
}
