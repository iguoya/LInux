#include <iostream>
#include <string>
using namespace std;


template<class T> void show(T obj) {
    cout<<obj<<endl;
}

template<class T> T add(T a, T b) {
    return a + b;
}

int main()
{
    cout << "Hello World!" << endl;

    show(add(5, 8));
    show(add(5.6, 8.3));
    show(add(string("hello"), string("world")));



    return 0;
}
