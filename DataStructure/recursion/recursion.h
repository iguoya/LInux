#ifndef RECURSION_H
#define RECURSION_H
#include <vector>
#include <iostream>
using namespace std;

class Block {
public:
    Block(int a, int b):row(a), column(b){};
    int row;
    int column;
    bool operator ==(const Block& obj)
    {
        if(row == obj.row && column == obj.column)
        {
            return true;
        } else {
            return false;
        }
    }
    void show() {
        cout<<"("<<row<<","<<column<<")";
    }
};
typedef vector<Block> Route;

class Recursion
{
public:
    Recursion();
    static void Fibonacci(int n, vector<int> &result);
    static vector<int> Fibonacci2(int n);
    static vector<Block> add_conflict_block(Block bk, int n);
    static void Queen(int row, const int column, vector<Block> route, vector<Route> &all_route);
//    static vector<Route> Queen2(int row, int column, vector<Block> route, vector<Route> &scheme);
    //    vector<Block> Queen(int n, vector<Block> &choice, vector<Block> &blocks);
};

#endif // RECURSION_H
