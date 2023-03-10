#include "Point.hpp"
#include <cmath>

static float area(float x1, float y1, float x2, float y2, float x3, float y3) {
  return fabs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

bool bsp(const Point a, const Point b, const Point c, const Point point)
{
  (void)point;
  Fixed totalArea = area(a.getXPos(), a.getYPos(),
                         b.getXPos(), b.getYPos(),
                         c.getXPos(), c.getYPos());

  //   /* Calculate area of triangle PBC */
  //   Fixed a1 = area(point.getXPos(), point.getYPos(),
  //                   b.getXPos(), b.getYPos(),
  //                   c.getXPos(), c.getYPos());

  //   /* Calculate area of triangle PAC */
  //   Fixed a2 = area(a.getXPos(), a.getYPos(),
  //                   point.getXPos(), point.getYPos(),
  //                   c.getXPos(), c.getYPos());

  //   /* Calculate area of triangle PAB */
  //   Fixed a3 = area(a.getXPos(), a.getYPos(),
  //                   b.getXPos(), b.getYPos(),
  //                   point.getXPos(), point.getYPos());

  return (totalArea > 0 ? true : false);
}