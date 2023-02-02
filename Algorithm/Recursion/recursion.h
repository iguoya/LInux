#ifndef RECURSION_H
#define RECURSION_H

#include <QWidget>

namespace Ui {
class Recursion;
}

class Recursion : public QWidget
{
    Q_OBJECT

public:
    explicit Recursion(QWidget *parent = nullptr);
    ~Recursion();

private:
    Ui::Recursion *ui;
};

#endif // RECURSION_H
