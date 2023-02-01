#include "recursion.h"
#include <algorithm>
#include <iostream>

Recursion::Recursion()
{
    //    Queen(int n);


}
void Recursion::Fibonacci(int n, vector<int> &result) {
    if(n == 2) {
        result.push_back(1);
        result.push_back(1);
    } else {
        Fibonacci(n-1, result);
        auto it = result.end();
        int first = *(--it);
        int second = *(--it);
        result.push_back(first+second);
    }
}

vector<int> Recursion::Fibonacci2(int n) {
    vector<int> result;
    if(n == 2) {
        result.push_back(1);
        result.push_back(1);
        return result;
    } else {
        result = Fibonacci2(n-1);
        auto it = result.end();
        int first = *(--it);
        int second = *(--it);
        result.push_back(first+second);
        return result;
    }
}

vector<Block> Recursion::add_conflict_block(Block bk, int n) {
    vector<Block> blocks;
    // 横向去除
    for(int i = 1; i<= n; ++i) {
        blocks.push_back(Block(bk.row, i));
    }

    // 纵向去除
    for(int i = 1; i<= n; ++i) {
        blocks.push_back(Block(i, bk.column));
    }

    //正斜线去除
    for(int i = 1; i< n; ++i) {
        if(bk.row+i > n || bk.column+i > n) break;
        blocks.push_back(Block(bk.row+i, bk.column+i));
    }
    for(int i = 1; i< n; ++i) {
        if(bk.row-i <= 0  || bk.column-i <= 0) break;
        blocks.push_back(Block(bk.row+i, bk.column+i));
    }

    //反斜线去除
    for(int i = 1; i< n; ++i) {
        if(bk.row+i > n || bk.column-i <= 0) break;
        blocks.push_back(Block(bk.row+i, bk.column+i));
    }
    for(int i = 1; i< n; ++i) {
        if(bk.row-i <= 0 || bk.column+i > n) break;
        blocks.push_back(Block(bk.row+i, bk.column+i));
    }

//    for(auto it = blocks.begin(); it != blocks.end(); ++it) {
//        cout<<"("<<it->row<<","<<it->column<<")\t"<<endl;;
//    }
    //     sort(blocks.begin(),blocks.end());
    //     blocks.erase(unique(blocks.begin(), blocks.end()), blocks.end());
    return blocks;
}
//bool check_legal(vector<Block> &block, int row, int column) {
//    return true;
//}
//vector<Block> Recursion::Queen(const int length , int row, int column, vector<Block> &block) {
//    if(row > length) return block;
//    if(check_legal(block, row, column)) {
//        block.push_back(Block(row,column));
//    } else {

//    }
//    for(int column = 1; column <= length; ++column) {
//        Queen(length, ++row, column, block);
//    }
//}

void Recursion::Queen(int row, const int column_upper, vector<Block> route, vector<Route> &all_route) {

    if(row == 0) {
        all_route.push_back(route);
    } else {
        for(int column = 1; column <= column_upper; ++column) {
            route.push_back(Block(row,column));
            Queen(row-1, column, route, all_route);
//            route.clear();
        }
        route.clear();
    }
}

//void Recursion::Queen2(int row, int column, vector<Block> route) {
////    vector<Route> scheme;
//    if(row == 0) {
////        scheme.push_back(route);
////        return scheme;
//    } else {
//        for(int i = 1; i <= column; ++i) {
//            route.push_back(Block(row, i));
//            Queen2(row-1, column, route);
//        }
//    }
//}

//vector<Block> Recursion::Queen(int n, vector<Block> &choice, vector<Block> &blocks) {
//    if(n == 0) {
//        //        cout<<"over"<<endl;
//        return choice;
//    }
//    for(int row = 1; row <= 8; ++row) {
//        for(int column = 1; column <=8; ++column) {
//            Block luck(row, column);
//            auto it = find(blocks.begin(), blocks.end(), luck);
//            if(it == blocks.end()) {
//                choice.push_back(luck);
//                blocks = add_conflict_block(luck, 8);
//                Queen(n-1, choice, blocks);
//            } else {
//                continue;
//            }
//        }
//    }
//    return blocks;
//}
