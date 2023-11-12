#ifndef POINT2DHEADERDEF
#define POINT2DHEADERDEF

class Point2d{
public:
    double x, y;
    static double tolerance;

    Point2d(double a, double b);

    bool operator<(const Point2d& other) const;
};

#endif
