#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape()
{
    setColor("green");
    setFilled(true);
}

Shape::Shape(string sColor, bool sFilled)
{
    setColor(sColor);
    setFilled(sFilled);
}

void Shape::setColor(string sColor)
{
    color = sColor;
}

void Shape::setFilled(bool sFilled)
{
    filled = sFilled;
}

string Shape::getColor()
{
    return color;
}

bool Shape::isFilled()
{
    return filled;
}

string Shape::toString()
{
    if(isFilled() == true)
        return ("A Shape with color " + getColor() + " and is filled");
    else
        return ("A Shape with color " + getColor() + " and is Not filled");
}
