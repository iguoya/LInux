#ifndef TPL_H
#define TPL_H

#include <QWidget>

namespace Ui {
class Tpl;
}

class Tpl : public QWidget
{
    Q_OBJECT

public:
    explicit Tpl(QWidget *parent = nullptr);
    ~Tpl();

private:
    Ui::Tpl *ui;
};

#endif // TPL_H
