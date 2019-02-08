#ifndef SCENEENTITY_H
#define SCENEENTITY_H

#include <QObject>
#include "Term/consolecolor.h"
class SceneEntity : public QObject
{
    Q_OBJECT
public:
    explicit SceneEntity(QObject *parent = nullptr);
    char getCh(){return ch;}
    int getColor(){return color;}
protected:
    char ch;
    int color;
signals:

public slots:
};

#endif // SCENEENTITY_H
