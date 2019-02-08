#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QObject>
#include <QVector>
#include "Term/consolecolor.h"
#include "Term/cframe.h"
#include "Term/clabel.h"

class BaseWidget : public QObject
{
    Q_OBJECT
public:
    BaseWidget(QObject *parent = nullptr);
    void update();
    void hide();
    void show();
public slots:
    void keyPressed(char) {}
protected:
    QVector<BaseConsoleObject*> coVec;
};

#endif // BASEWIDGET_H
