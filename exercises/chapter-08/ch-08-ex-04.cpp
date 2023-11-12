/*
 * ch-08-ex-04.cpp
 *
 * STL set
 *
 * Created on: Nov 12, 2023
 * 	   Author: Jiaye Wei <jiaye.wei@epfl.ch>
 */

#include <iostream>
#include <set>

#include "Point2d.hpp"

int main(int argc, char* argv[])
{
    std::set<Point2d> points;
    Point2d origin(0, 0);

    // set the tolerance for the comparison operator of Point2d
    Point2d::tolerance = 1e-6;

    points.insert(origin);
    points.insert(Point2d(-2.0, 1.0));
    points.insert(Point2d(-2.0, -5.0));
    points.insert(Point2d(0.0, 0.0));

    std::cout << "Number of points in set = " << points.size() << "\n";

    std::set<Point2d>::const_iterator c;
    std::cout.precision(3);

    for (c = points.begin(); c != points.end(); c++)
    {
        std::cout << c->x << " " << c->y << "\n";
    }

    return 0;
}