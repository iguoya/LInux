#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"


#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{


    cout << "RAND_MAX:" << RAND_MAX<< endl;
    srand((unsigned)time(NULL));

    //二维数组

    int side[10][10];

    for(auto row = 0; row < 10; ++row) {
        for(auto col = 0; col < 10; ++col) {
            side[row][col] = rand() % 100;
        }
    }

    for(auto row = 0; row < 10; ++row) {
        for(auto col = 0; col < 10; ++col) {
            cout<<side[row][col];
            cout<<"\t";
        }
        cout<<endl;
    }

    //三维数组

    int space[10][10][10];

    for(auto x = 0; x < 10; ++x) {
        for(auto y = 0; y < 10; ++y) {
            for(auto z = 0; z < 10; ++z) {
                space[x][y][z] = rand() % 100;
            }
        }
    }

    for(auto x = 0; x < 10; ++x) {
        cout<<"----------"<<x<<" side begin-----------------"<<endl;

        for(auto y = 0; y < 10; ++y) {
            cout<<endl;
            for(auto z = 0; z < 10; ++z) {
                cout<<space[x][y][z];
                cout<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"----------"<<x<<" side end-----------------"<<endl;

    }


    rapidjson::StringBuffer strBuf;
    rapidjson::Writer<rapidjson::StringBuffer> writer(strBuf);
    writer.StartObject();
    writer.Key("title");
    writer.String("数组线性表示");
    writer.Key("side");
    writer.StartArray();
    for(auto row = 0; row < 10; ++row) {
        for(auto col = 0; col < 10; ++col) {
            writer.Int(side[row][col]);
        }
    }
    writer.EndArray();
    writer.Key("space");
    writer.StartArray();
    for(auto x = 0; x < 10; ++x) {
        for(auto y = 0; y < 10; ++y) {
            for(auto z = 0; z < 10; ++z) {
                writer.Int(space[x][y][z]);
            }
        }
    }
    writer.EndArray();


    writer.EndObject();

    string data = strBuf.GetString();
    cout << data << endl;


    std::ofstream ofwriter("array.json",std::ofstream::app);
    ofwriter<<data;
    ofwriter.close();


    return 0;
}
