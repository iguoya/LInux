#include "helloworld.h"

HelloWorld::HelloWorld()
{

}

void HelloWorld::run()
{
    s_notice.emit("Hello World !!!!");

    s_set_columns({"芙", "蓉", "楼", "送", "辛", "渐", ""});

    vector<vector<string>> data = {
        {"寒", "雨", "连", "江", "夜", "入", "吴"},
        {"平", "明", "送", "客", "楚", "山", "孤"},
        {"洛", "阳", "亲", "友", "如", "相", "问"},
        {"一", "片", "冰", "心", "在", "玉", "壶"}
    };
    s_display_table(data);
}
