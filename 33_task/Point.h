#pragma once


#include "Shape.h"
class Point :
    public Shape
{
public:
    Point(const size_t& x, const size_t& y)
        :x{x}, y{y} {}
        

    virtual void print()const override
    {
        cout << "Poin --> " << "X -->  :" << x << ":   Y -->  :" << y << ":" << endl;
    }
        

    virtual void printShapeName() const
    {
        cout << "Point" << endl;
    }


protected:
    size_t x, y;
};

