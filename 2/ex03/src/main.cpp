#include <iostream>
#include "Point.hpp"

bool bsp(const Point a, const Point b, const Point c, const Point point);

int	main(void)
{
    Point triangleA = Point(0.0f, 0.0f);
    Point triangleB = Point(10.0f, 30.0f);
    Point triangleC = Point(20.0f, 0.0f);

    Point point = Point(10.0f, 15.0f);

    if (bsp(triangleA, triangleB, triangleC, point)) {
        std::cout << "Yes" << std::endl;
    }
}
