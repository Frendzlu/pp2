#include <iostream>
#include "Vector2d.h"

using namespace std;

int main() {
        std::cout << "#### Test 1 ####" << std::endl;
    {
        const Vector2d v1(2, 3);
        Vector2d v2;
        v2.x(2);
        const Vector2d v3 = v1.add(v2);
        std::cout << "v3: " << v3 << std::endl;
 
        std::cout << "v3*1.5: " << v3 * 1.5 << std::endl;
 
        std::cout << "1.5*v3: " << 1.5 * v3 << std::endl;
 
        std::cout << "v3-v1: " << v3 - v1 << std::endl;
 
        std::cout << "v1 dot v2: " << v1.dot(v2) << std::endl;
 
        std::cout << "v3 length squared: " << v3.lengthSq() << std::endl;
 
        std::cout << "v3 length: " << v3.length() << std::endl;
 
        std::cout << "v3 perp: " << v3.perpendicular() << std::endl;
 
        v2.x(3).y(2);
        std::cout << "v2: " << v2 << std::endl;
    }

        std::cout << "\n#### Test 2 ####" << std::endl;
    {
        const Vector2d v1(2, 3);
        Vector2d v2;
        v2.x(2);
        const Vector2d v3 = v1.add(v2);
 
        Vector2d v4(1, 1);
        v4 += v1;
        v4 -= v2;
        v4 += v3;
        v4 *= 2;
 
        std::cout << "v4: " << v4 << std::endl;
    }
        std::cout << "\n#### Test 3 ####" << std::endl;
    {
        Vector2d::compEpsilon(0.0001);
 
        Vector2d v1(2, 3);
        const Vector2d v2(2.1, 3.1);
        const Vector2d v3 = (v2 - v1) * 0.001;
        const Vector2d v4;
 
        std::cout << "v4: " << v4 << std::endl;
 
        std::cout << "v3 == v4: " << std::boolalpha << (v3 == v4) << std::endl;
        std::cout << "v3 != v4: " << std::boolalpha << (v3 != v4) << std::endl;
 
        Vector2d::compEpsilon(0.01);
        std::cout << "v3 == v4: " << std::boolalpha << (v3 == v4) << std::endl;
        std::cout << "v3 != v4: " << std::boolalpha << (v3 != v4) << std::endl;
        Vector2d target = Vector2d(v1);
        v1 = v1.mult(2.0);
        std::cout << target << " vs " << v1 << std::endl;

        Vector2d v0(2, 3);
        std::cout << "v0: " << v0 << std::endl;
        std::cout << "v0[5]: " << v0[5] << std::endl;
        std::cout << "v0[6]: " << v0[6] << std::endl;
        v0[2] = 2.24;
        v0[3] = 2.52;
        std::cout << "v0[1]: " << v0[1] << std::endl;
        std::cout << "v0[0]: " << v0[0] << std::endl;
    }
 
    return 0;
}
