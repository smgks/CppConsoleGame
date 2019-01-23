#include "clabel.h"

CLabel::CLabel(int x, int y, BaseConsoleObject  *parent) : BaseConsoleObject(parent)
{

}

QString CLabel::getText()
{
    return m_text;
}

void CLabel::setText(QString str)
{
    m_text = str;
}
