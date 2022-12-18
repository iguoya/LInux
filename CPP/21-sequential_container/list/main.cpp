
#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>
using namespace std;


int main()
{
    //用list容器处理整型数据
    //用list<int>创建一个名为listOne的list对象
    list<int> listOne;
    //声明i为迭代器
    list<int>::iterator i;

    //从前面向listOne容器中添加数据
    listOne.push_front (2);
    listOne.push_front (1);

    //从后面向listOne容器中添加数据
    listOne.push_back (3);
    listOne.push_back (4);

    //从前向后显示listOne中的数据
    cout<<"listOne.begin()--- listOne.end():"<<endl;
    for (i = listOne.begin(); i != listOne.end(); ++i)
        cout << *i << " ";
    cout << endl;

    //从后向后显示listOne中的数据
    list<int>::reverse_iterator ir;
    cout<<"listOne.rbegin()---listOne.rend():"<<endl;
    for (ir =listOne.rbegin(); ir!=listOne.rend();ir++) {
        cout << *ir << " ";
    }
    cout << endl;

    //使用STL的accumulate(累加)算法
    int result = accumulate(listOne.begin(), listOne.end(), 100);
    cout<<"Sum="<<result<<endl;
    cout<<"------------------"<<endl;

    //--------------------------
    //用list容器处理字符型数据
    //--------------------------

    //用list<char>创建一个名为listOne的list对象
    list<char> listTwo;
    //声明i为迭代器
    list<char>::iterator j;

    //从前面向listTwo容器中添加数据
    listTwo.push_front ('A');
    listTwo.push_front ('B');

    //从后面向listTwo容器中添加数据
    listTwo.push_back ('x');
    listTwo.push_back ('y');

    //从前向后显示listTwo中的数据
    cout<<"listTwo.begin()---listTwo.end():"<<endl;
    for (j = listTwo.begin(); j != listTwo.end(); ++j)
        cout << char(*j) << " ";
    cout << endl;

    //使用STL的max_element算法求listTwo中的最大元素并显示
    j=max_element(listTwo.begin(),listTwo.end());
    cout << "The maximum element in listTwo is: "<<char(*j)<<endl;

    cout <<"max:"<< listOne.max_size()/1024/1024 << endl;
}
