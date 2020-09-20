#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"

#include <iostream>
#include <string>
#include <fstream>


#include <limits>
using namespace std;

int main()
{
    rapidjson::StringBuffer strBuf;
    rapidjson::Writer<rapidjson::StringBuffer> writer(strBuf);
    writer.StartObject();
    writer.Key("title");
    writer.String("数值范围");


    writer.Key("content");
    writer.StartArray();
    for(auto i = 0; i!=1; ++i) {
        writer.StartArray();
        writer.String("type");
        writer.String("bit/unsigned");
        writer.String("min");
        writer.String("max");
        writer.EndArray();

        writer.StartArray();
        writer.String("char");
        writer.String(to_string(CHAR_BIT).c_str());
        writer.String(to_string(CHAR_MIN).c_str());
        writer.String(to_string(CHAR_MAX).c_str());
        writer.EndArray();

        writer.StartArray();
        writer.String("short");
        writer.String(to_string(USHRT_MAX).c_str());
        writer.String(to_string(SHRT_MIN).c_str());
        writer.String(to_string(SHRT_MAX).c_str());
        writer.EndArray();


        writer.StartArray();
        writer.String("int");
        writer.String(to_string(UINT_MAX).c_str());
        writer.String(to_string(INT_MIN).c_str());
        writer.String(to_string(INT_MAX).c_str());
        writer.EndArray();


        writer.StartArray();
        writer.String("long");
        writer.String(to_string(ULONG_MAX).c_str());
        writer.String(to_string(LONG_MIN).c_str());
        writer.String(to_string(LONG_MAX).c_str());
        writer.EndArray();


        writer.StartArray();
        writer.String("long long");
        writer.String(to_string(ULLONG_MAX).c_str());
        writer.String(to_string(LLONG_MIN).c_str());
        writer.String(to_string(LLONG_MAX).c_str());
        writer.EndArray();

    }
    writer.EndArray();

    writer.EndObject();

    string data = strBuf.GetString();
    cout << data << endl;


    std::ofstream ofwriter("range.json",std::ofstream::app);
    ofwriter<<data;
    ofwriter.close();

    return 0;
}
