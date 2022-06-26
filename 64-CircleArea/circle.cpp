#include "circle.h"

Circle::Circle(QObject *parent) : QObject(parent)
{

}

QString Circle::getArea(QString r)
{
    double m_r = r.toDouble();
    return QString::number(3.14*m_r*m_r);
}
