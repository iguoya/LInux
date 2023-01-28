#ifndef CIRCLE_H
#define CIRCLE_H

#include <QObject>

class Circle : public QObject
{
    Q_OBJECT

//    Q_PROPERTY(QString area READ area WRITE getArea NOTIFY areaChanged)

public:
    explicit Circle(QObject *parent = nullptr);

    Q_INVOKABLE QString getArea(QString r);

signals:

};

#endif // CIRCLE_H
