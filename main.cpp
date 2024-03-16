#include <iostream>
#include "Vector2d.h"

using namespace std;

int main() {
    Vector2d v1 = Vector2d();
    Vector2d v2 = Vector2d(1, 2);
    Vector2d v3 = v2.mult(3);
    Vector2d v4 = v2.add(v3);
    Vector2d v5 = v2.sub(v3);
    Vector2d v6 = -v4*2+v3-v5;
    v1.print();
    v2.print();
    v3.print();
    v4.print();
    v5.print();
    v6.print();
    return 0;
}
