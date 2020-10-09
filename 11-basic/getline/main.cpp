#include <boost/algorithm/string.hpp>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    cout << "请输入一行字符串:" << endl;
    string str;
    // cin >> str;
    getline(cin, str);

    cout << "你输入的是:" << endl;
    cout << str << endl;

    vector<string> words;

    boost::split(words, str, boost::is_space());
    for (auto it = words.begin(); it != words.end(); ++it)
    {
        cout<< *it << endl;
    }

    // to do
    // 提取字符串
    //比较字符串
    // 添加字符串
    // 搜索字符串

    return 0;
}
