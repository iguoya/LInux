#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    Point a(35, 38);
    a.show();

    Point b(a);
    b.show();

    b.add_point(a);

    b.show();

    Point c = Point::generate_point();
    c.show();

    return 0;
}
