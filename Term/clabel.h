#ifndef CLABEL_H
#define CLABEL_H

#include "consolecolor.h"
#include "baseconsoleobject.h"

class CLabel : public BaseConsoleObject
{
    Q_OBJECT
    Q_PROPERTY(QString text READ getText WRITE setText NOTIFY textChanged)
    Q_PROPERTY(int color READ getColor WRITE setColor NOTIFY colorChanged)
signals:
    void colorChanged(int);
    void textChanged(QString);
public:
    explicit CLabel(QObject *parent = nullptr);
    explicit CLabel(QString str,
                    qreal y_proc = 0, qreal x_proc = 0,
                    QObject *parent = nullptr);
    QString getText();
    void setText(QString str);
    void initialize();
    void ClearMem();
    int getColor();
    void setColor(int clr);
private:
    int m_color = ConsoleText::Color::WhiteBlack;
    QString m_text;
};

#endif // CLABEL_H
