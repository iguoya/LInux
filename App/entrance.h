#ifndef ENTRANCE_H
#define ENTRANCE_H

#include <QWidget>

namespace Ui {
class Entrance;
}

class Entrance : public QWidget
{
    Q_OBJECT

public:
    explicit Entrance(QWidget *parent = nullptr);
    ~Entrance();

private slots:
    void on_pushButton_4_clicked();
signals:
    void SignalEntrance(QString type);
private:
    Ui::Entrance *ui;
};

#endif // ENTRANCE_H
