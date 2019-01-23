#ifndef BASESTATE_H
#define BASESTATE_H

#include <QObject>

class BaseState : public QObject
{
    Q_OBJECT
public:
    explicit BaseState(QObject *parent = nullptr);

signals:

public slots:
};

#endif // BASESTATE_H
