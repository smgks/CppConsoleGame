#ifndef CLABEL_H
#define CLABEL_H

#include "baseconsoleobject.h"

class CLabel : public BaseConsoleObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText)
public:
    explicit CLabel(int x = 0, int y = 0, BaseConsoleObject *parent = nullptr);
    QString getText();
    void setText(QString str);
private:
    QString m_text;
};

#endif // CLABEL_H
