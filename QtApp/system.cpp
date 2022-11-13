#include "system.h"
#include "ui_system.h"

System::System(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::System)
{
    ui->setupUi(this);
}

System::~System()
{
    delete ui;
}

void System::on_Char_clicked()
{
    //        setLabels({"AAA", "BBB", "CCCC"});
    //      void setData(QList<QVector<QVariant>> sets);


    QList<QVector<QVariant>> sets;
    for(int i = 0; i <= 127; ++i) {
        QVector<QVariant> row;
        row.append(QString("%1").arg(i));
        if(isprint(i)) {
            row.append(QString("%1").arg(QChar(i)));
            row.append(QString::number(i, 16).toUpper());
        }
        if(ispunct(i)){
            row.append("标点符号");
        }
        if(isdigit(i)) {
            row.append("阿拉伯数字");
        }
        if(isalpha(i)) {
            row.append("拉丁字符");
        }
        if(isupper(i)) {
            row.append("大写字符");
        }
        if(islower(i)) {
            row.append("小写字符");
        }
        if(isspace(i)) {
            row.append("空白字符");
        }
        if(isascii(i)) {
            row.append("ASCII码");
        }
        sets.append(row);
    }
    setData(sets);
}
