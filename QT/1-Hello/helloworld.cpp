#include "helloworld.h"
#include <iostream>
#include <QDebug>

HelloWorld::HelloWorld(QObject *parent) : QObject(parent)
{

}

void HelloWorld::hello()
{
     std::cout<<"hello world  !!!!!!!"<<std::endl;

}

void HelloWorld::say()
{
    qDebug()<<"abcd";
}
