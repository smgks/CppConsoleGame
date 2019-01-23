#ifndef CLABEL_H
#define CLABEL_H

#include <QObject>

class CLabel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText)
public:
    explicit CLabel(int x = 0, int y = 0, QObject *parent = nullptr);
    QString getText();
    void setText(QString str);
private:
    QString m_text;
};

#endif // CLABEL_H
