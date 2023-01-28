#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <QObject>

class HelloWorld : public QObject
{
    Q_OBJECT
public:
    explicit HelloWorld(QObject *parent = nullptr);

//signals:
    static void hello();
public slots:

    void say();


};

#endif // HELLOWORLD_H
