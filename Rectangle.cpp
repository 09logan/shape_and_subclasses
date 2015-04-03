#include <iostream>
#include "Rectangle.h"
#include <sstream>

using namespace std;

Rectangle::Rectangle()
{
    setLength(1.0);
    setWidth(1.0);
}

Rectangle::Rectangle(double sLength, double sWidth)
{
    setWidth(sLength);
    setLength(sWidth);
}

Rectangle::Rectangle(double sLength, double sWidth, string sColor, bool sFilled)
    :Shape(sColor,sFilled)
{
    setWidth(sLength);
    setLength(sWidth);
}

void Rectangle::setLength(double sLength)
{
    width = sLength;
}

void Rectangle::setWidth(double sWidth)
{
    length = sWidth;
}

double Rectangle::getLength()
{
    return length;
}

double Rectangle::getWidth()
{
    return width;
}

double Rectangle::getArea()
{
    return (length*width);
}

double Rectangle::getPerimeter()
{
    return (2*(length+width));
}

string Rectangle::toString()
{
    stringstream length, width;
    width << getWidth();
    length << getLength();
    return "A rectangle with length = "  + length.str() + " and width = " + width.str() + ", which is a sub-class of " + Shape::toString() ;
}

