
#include <iostream>
#include "Shape.h"

using namespace std;

class Circle:public Shape{
private:
    double radius;
public:
    Circle();
    Circle(double sRadius);
    Circle(string , bool,double );
    void setRadius(double sRadius);
    double getRadius();
    double getArea();
    double getPerimeter();
    string toString();
};
