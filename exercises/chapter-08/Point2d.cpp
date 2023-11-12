#include "Point2d.hpp"

double Point2d::tolerance = 1e-9;

Point2d::Point2d(double a, double b){ x = a; y = b; }

bool Point2d::operator<(const Point2d& other) const
{
    if ((x - other.x) < -tolerance)
    {
        return true;
    }
    else if ((x - other.x) > tolerance)
    {
        return false;
    }
    else if ((y - other.y) < -tolerance)
    {
        // x == other.x
        return true;
    }
    else
    {
        // x == other.x and y >= other.y
        return false;
    }
}