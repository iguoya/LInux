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
    sets.clear();
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

void System::on_String_clicked()
{
    sets.clear();
    QVector<QVariant> row;
    const char *s1 = "3.1416xx33x";
    //    row.append(QString("%1").arg(s1));
    row.append(s1);
    row.append("atoi");
    row.append(atoi(s1));
    sets.append(row);
    row.clear();

    const char *s2 = "22222222.333333ccc";
    row.append(s2);
    row.append("atoi");
    row.append(atoi(s2));
    sets.append(row);
    row.clear();

    row.append(s1);
    row.append("atof");
    row.append(atof(s1));
    sets.append(row);
    row.clear();

    const char *s3 = "222232222333.3333339999ccc";
    row.append(s3);
    row.append("atod");
    row.append(QString::number(strtod(s3, NULL)));
    sets.append(row);
    row.clear();




    sets.append(row);
    row.clear();

    const char *s4 = "china我是中国人";
    row.append(s4);
    row.append("strlen");
    row.append(QString::number(strlen(s4)));
    sets.append(row);
    row.clear();


    const char *s5 = "abcdefg";
    row.append(s5);
    row.append("index");
    row.append(index(s5, 'e'));
    sets.append(row);
    row.clear();


    const char *s6 = "abcdefg";
    const char *s7 = "hijklmno";
    char s8[100] = {0};
    row.append(s6);
    row.append("strcpy");
    row.append(strcpy(s8, s6));
    row.append(strncpy(s8, s7, strlen(s7)));
    sets.append(row);
    row.clear();

    const char *s61 = "abcdefg";
    const char *s71 = "hijklmno";
    char s81[100] = {0};
    row.append(s6);
    row.append("strcat");
    row.append(strcat(s81, s61));
    row.append(strncat(s81, s71, strlen(s71)));
    sets.append(row);
    row.clear();


    const char *s9 = "abcdefg";
    row.append(s9);
    row.append("strdup");
    char *sp = strdup("abcdefg");
    sp[1] = 'x';
    row.append(sp);
    free(sp);
    sets.append(row);
    row.clear();


    const char *s10 = "abcdefg";
    const char *s11 = "abcdefg";
    const char *s12 = "hijklmn";
    row.append(s10);
    row.append(s12);
    row.append("strcmp");
    row.append(strcmp(s10, s11));
    row.append(strcmp(s10, s12));
    sets.append(row);
    row.clear();


    const char *s13 = "abcdefg";
    const char *s14 = "efg";
    const char *s15 = "xyz";
    row.append(s13);
    row.append(s14);
    row.append(s15);
    row.append("strstr");
    row.append(strstr(s13, s14));
    if(strstr(s13, s15) != NULL) {
        row.append("找到");
    } else {
        row.append("没有找到");
    }

    sets.append(row);
    row.clear();


    char s16[100] = "abc;dessk;kccfg";
    row.append(s16);
    row.append("strtok");
    row.append(strtok(s16, ";"));
    row.append(strtok(s16, "b"));
    sets.append(row);
    row.clear();

    setData(sets);

}
