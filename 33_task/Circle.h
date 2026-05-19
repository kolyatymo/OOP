#pragma once
#include "Point.h"
class Circle :
    public Point
{
public:
    Circle(const size_t& x, const size_t& y, const size_t& r)
        :Point(x, y), r{ r } {}

    double area() override
    {
        double sum = 3.14 * (r * r);
        return sum;
    }

    virtual void print()const override
    {
        cout << "Circle --> " << "X -->  :" << x << ":   Y -->  :" << y << ":" << "  R -->  :" << r << ":" << endl;
    }


    virtual void printShapeName() const
    {
        cout << "Circle" << endl;
    }
   

protected:
    size_t r;
};

