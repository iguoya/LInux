#include <QCoreApplication>
#include <QtDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QString s1 = "hello";
    QString s2 = "to";
    s2 =s1 + s2;
    s2.append(" world\n");
    qDebug()<<s2;


    QString s3 = QString("%1 -- %2 ******%3").arg(s1)
            .arg(s2)
            .arg(100);

    qDebug()<<s3;

    QList<QString> list;
    {
        QString str("This is a test string");
        list<<str;
    }
    qDebug()<<list[0]<<"How are you !";

    QList<int> nlist;
    for(int i = 1; i <= 10; ++i) {
        nlist.append(i);
    }
    for(QList<int>::iterator i = nlist.begin(); i != nlist.end(); ++i) {
        qDebug()<< (*i);
        (*i) *= 10;
    }

    for(auto i= nlist.constBegin(); i != nlist.constEnd(); ++i) {
        qDebug()<< *i;
    }



    return a.exec();
}
