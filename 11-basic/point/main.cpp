#include <iomanip>
#include <iostream>
#include <string>
#include <ostream>

using namespace std;

void story(string *when, string *where, string *who, string *what)
{
    time_t current_time = time(0);
    tm *ltm = localtime(&current_time);
    // *when = to_string(1990+ltm->tm_year)+"年"
    // + to_string(ltm->tm_mon) +"月"+ to_string(ltm->tm_mday)+"日";
//    std::ostringstream   oss;
//    oss << 1900 + ltm->tm_year << "年" << ltm->tm_mon << "月" << ltm->tm_mday << "日";
//    *when = oss.str();
    *where = "洛阳";
    *who = "虎子";
    *what = "测试指针";
}

int main()
{
    int var1;
    char var2[10];

    cout << "var1 变量的地址： ";
    cout << &var1 << endl;

    cout << "var2 变量的地址： ";
    cout << &var2 << endl;

    int var = 20; // 实际变量的声明
    int *p_var;   // 指针变量的声明

    p_var = &var; // 在指针变量中存储 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in p_var variable: ";
    cout << p_var << endl;

    // 访问指针中地址的值
    cout << "Value of *p_var variable: ";
    cout << *p_var << endl;

    int *pi = NULL;
    cout << "NULL 指针:" << pi << endl;

    const int arr_len = 7;
    int arr[] = {10, 100, 200, 222, 3, 3, 5};
    int *ptr;

    // 指针中的数组地址
    ptr = arr;
    for (int i = 0; i < arr_len; i++)
    {
        cout << "地址:" << ptr << "\t"
             << "值:" << *ptr << endl;
        // 移动到下一个位置
        ptr++;
    }

    char *words[] = {
        "异常处理",
        "动态内存",
        "信号处理",
        "多线程",
        "Web编程",
        "数据抽象",
        "数据封装"};

    for (size_t i = 0; i < arr_len; ++i)
    {
        cout << setw(5) << "第" << i << "句:\t\t" << words[i] << endl;
    }
    // cout<<left<<setw(40)<<"靠左输出"<<left<<setw(35)<<"靠左输出"<<endl;
    // cout<<left<<setw(40)<<"setw()函数用来设置输出字符位宽"<<setw(35)<<"这里是简单的例子"<<endl;
    // cout<<setw(40)<<"这一行和上一行右对齐"<<setw(35)<<"虽然字符串不一样长"<<endl;
    // cout<<setw(40)<<"你应该知道如何使用他了吧"<<setw(35)<<"再见！"<<endl;
    // cout<<setw(5)<<"abc"<<setw(4)<<"-------"<<"edf"<<endl;
    string when, where, who, what;
    story(&when, &where, &who, &what);
    cout << when <<","<< where  <<","<< who  <<","<< what << endl;
    return 0;
}
