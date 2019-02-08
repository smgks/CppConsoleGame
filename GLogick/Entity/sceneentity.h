#ifndef SCENEENTITY_H
#define SCENEENTITY_H

#include <QObject>

class SceneEntity : public QObject
{
    Q_OBJECT
public:
    explicit SceneEntity(QObject *parent = nullptr);

signals:

public slots:
};

#endif // SCENEENTITY_H