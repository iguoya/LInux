#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    cout<<"char size:"<<sizeof(char)<<endl;
    cout<<"int size:"<<sizeof(int)<<endl;
    cout<<"float size:"<<sizeof(float)<<endl;
    cout<<"double size:"<<sizeof(double)<<endl;


    cout<<"string size:"<<sizeof(string)<<endl;
    cout<<"vector size:"<<sizeof(std::vector<int>)<<endl;
    cout<<"list size:"<<sizeof(std::list<int>)<<endl;
    cout<<"map size:"<<sizeof(std::map<int,int>)<<endl;

    return 0;
}
