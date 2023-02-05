#ifndef TASK_H
#define TASK_H

#include <QObject>
#include <QVariant>
//using Vector2D = QVector<QStringList>;


class Task : public QObject
{
    Q_OBJECT
public:
    explicit Task(QObject *parent = nullptr);
    virtual void run();
    virtual void run(size_t number);
    virtual void run(QVector<int>& series);
signals:
    void display(const QString& data);
    void displayList(const QStringList& data);
    void setTableHeader(const QStringList& data);
    void displayTable(const QVector<QStringList>& data);
protected:

    QString vectorToString(QVector<int>& series);

    QVector<QStringList> m_array2D;
    QStringList m_series;
};


#endif // TASK_H
