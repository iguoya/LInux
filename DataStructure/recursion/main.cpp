#include <iostream>
#include "recursion.h"
using namespace std;


int main()
{
//    Recursion t;
//    vector<Block> blocks = t.add_conflict_block(Block(1,1), 8);
    cout << "Hello World!" << endl;
    cout<<"**************斐波那契数列,引用返回******************"<<endl;
    vector<int> result;
    Recursion::Fibonacci(10, result);
    for(auto it = result.begin(); it != result.end(); ++it) {
        cout<<*it<<"\t";
    }
    cout<<endl;
    cout<<"**************斐波那契数列,正常返回******************"<<endl;
    result.clear();
    result = Recursion::Fibonacci2(10);
    for(auto it = result.begin(); it != result.end(); ++it) {
        cout<<*it<<"\t";
    }
    cout<<endl;

//    Route r;
//    vector<Route> scheme;
//    scheme = Recursion::Queen2(3, 3, r, scheme);
//    for(auto it = scheme.begin(); it != scheme.end(); ++it) {
//        for(auto ir = it->rbegin(); ir!=it->rend(); ++ir) {
//            ir->show();
//        }
//        cout<<endl;
//    }
//    Recursion
//    Recursion::Queen2(3,3);

    return 0;
}
