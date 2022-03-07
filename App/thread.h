#ifndef THREAD_H
#define THREAD_H

#include <QWidget>

namespace Ui {
class Thread;
}

class Thread : public QWidget
{
    Q_OBJECT

public:
    explicit Thread(QWidget *parent = nullptr);
    ~Thread();

signals:
    void SignalEntrance(QString type);

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

private:
    Ui::Thread *ui;
};

#endif // THREAD_H
