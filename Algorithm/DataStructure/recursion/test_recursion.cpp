#include <gtest/gtest.h>
#include <map>
#include <iostream>
#include "recursion.h"

using namespace std;

class RecursionTest: public ::testing::Test
{
public:
    Recursion t;
protected:
    // You can remove any or all of the following functions if its body
    // is empty.

    RecursionTest() {
        // You can do set-up work for each test here.
        cout<<"递归 测试套件: 起始"<<endl;
    }

    ~RecursionTest() override {
        cout<<"递归 测试套件: 结束"<<endl;

        // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    void SetUp() override {
        cout<<"构造函数不够用的情况下使用: 对初始化的其他补充"<<endl;
        // Code here will be called immediately after the constructor (right
        // before each test).


    }

    void TearDown() override {
        cout<<"每个测试用例调用后执行, 在析构函数执行之前运行"<<endl;
//        cout<<"整体测试层面: 所有测试运行结束"<<endl;
        // Code here will be called immediately after each test (right
        // before the destructor).
    }

};
TEST_F(RecursionTest, ConflictBlock)   //此时使用的是TEST_F宏
{
    Block bk(1,1);
    vector<Block> blocks;
    blocks = t.add_conflict_block(bk, 8);
    cout<<"now"<<endl;
//    for(auto it = blocks.end(); it != blocks.end(); ++it) {
//        cout<<"("<<it->row<<","<<it->column<<")\t";
//    }

}


int main(int argc,char *argv[])
{
    testing::InitGoogleTest(&argc, argv);//将命令行参数传递给gtest
    return RUN_ALL_TESTS();   //RUN_ALL_TESTS()运行所有测试案例
}
