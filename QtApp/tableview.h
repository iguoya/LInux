#ifndef TABLEVIEW_H
#define TABLEVIEW_H

#include <QWidget>
#include <QStandardItem>

namespace Ui {
class TableView;
}

class TableView : public QWidget
{
    Q_OBJECT

public:
    explicit TableView(QWidget *parent = nullptr);

    QStandardItemModel *model;
    ~TableView();

public slots:
    void setModelNames(QStringList names);
    void setData(QList<QVector<QVariant>> sets);

private:
    Ui::TableView *ui;
};

#endif // TABLEVIEW_H
