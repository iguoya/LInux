#include "auto.h"

template <typename T>
string func(void){
    auto val = T::get();
//    cout << val << endl;
//    char str[64] = {0};
//    snprintf(str, sizeof(str)-1, "%s", val);
//    return string(str);
    return (boost::format ("%1%") %(val)).str();
}


Auto::Auto()
{

}

void Auto::run()
{
    notice(func<AutoA>());
    notice(func<AutoB>());
}
