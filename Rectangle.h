
#include <iostream>
#include "Shape.h"
using namespace std;

#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle: public Shape{
private:
    double width, length;
public:
    Rectangle();
    Rectangle(double, double);
    Rectangle(double, double, string, bool);
    void setWidth(double);
    void setLength(double);
    double getWidth();
    double getLength();
    double getArea();
    double getPerimeter();
    string toString();
};
#endif // RECTANGLE_H
