
#include <iostream>
using namespace std;

#ifndef SHAPE_H
#define SHAPE_H

class Shape{
private:
    string color;
    bool filled;
public:
    Shape();
    Shape(string,bool);
    void setColor(string sColor);
    void setFilled(bool sFilled);
    string getColor();
    bool isFilled();
    string toString();
};
#endif // SHAPE_H
