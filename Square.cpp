#include <iostream>
#include "Square.h"
#include <sstream>
using namespace std;

Square::Square():Rectangle()
{

}

Square::Square(double side):Rectangle(side,side)
{

}

Square::Square(double side, string color, bool filled):Rectangle(side,side,color,filled)
{

}

void Square::setSide(double side)
{
    Rectangle::setLength(side);
}

double Square::getSide()
{
    Rectangle::getLength();
}

string Square::toString()
{
    stringstream side;
    side << Rectangle::getLength();
    return "A square with side = " + side.str() + " which is a subclass of " + Rectangle::toString();
}
