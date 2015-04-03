#include <iostream>
#include "Circle.h"
#include <sstream>
#include <math.h>

using namespace std;

Circle::Circle()
{
    setRadius(1.0);
}

Circle::Circle(double sRadius)
{
    setRadius(sRadius);
}

Circle::Circle(string sColor, bool sFilled,double sRadius)
    :Shape(sColor,sFilled)
{
    setRadius(sRadius);
}

void Circle::setRadius(double sRadius)
{
    radius = sRadius;
}

double Circle::getRadius()
{
    return radius;
}

double Circle::getArea()
{
    return ((22/7)* pow(radius,2));
}

double Circle::getPerimeter()
{
    return (2*(22/7)*radius);
}

string Circle::toString()
{
    stringstream radius;
    radius << getRadius();
    return "A circle with radius = " + radius.str() + ", which is a sub-class of " + Shape::toString();
}
