#ifndef THREAD_H
#define THREAD_H

#include <QWidget>
#include <QStringList>
#include <QStringListModel>

namespace Ui {
class Thread;
}

class Thread : public QWidget
{
    Q_OBJECT

public:
    explicit Thread(QWidget *parent = nullptr);
    ~Thread();
    QStringListModel *model;


signals:
    void setModel(QStringListModel *model);

private slots:
    void on_CreateThread_clicked();

private:
    Ui::Thread *ui;
};

#endif // THREAD_H
