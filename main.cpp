#include <iostream>
#include <sstream>
#include <string.h>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"

using namespace std;

int main()
{
    string color;
    bool filled;
    double radius, side, length, width;
    char choice;

    cout<<"Press C for Circle, R for rectangle and S for square ";
    cout<<"\nEnter the choice of shape: ";
    cin>> choice;

    if(choice == 'C')
    {
        cout<<"Enter the radius of the circle: ";
        cin>> radius;
        cout<<"Is color filled:(Press 0 for no and 1 for yes) ";
        cin>> filled;
        if (filled == 1)
        {
             cout<<"Enter the color: ";
             cin>> color;

        }
        Circle newCircle(color, filled, radius);
        cout << newCircle.toString() << endl;
    }

    else if(choice == 'R')
    {
        cout<< "Enter the length and width of rectangle: ";
        cin>> width>> length;
        cout<<"Is color filled: (Press 0 for no and 1 for yes) ";
        cin>> filled;
        if (filled == 1)
        {
             cout<<"Enter the color: ";
             cin>> color;

        }
        Rectangle newRectangle(width, length, color, filled);
        cout << newRectangle.toString() << endl;
    }

    else if(choice == 'S')
    {
        cout<< "Enter the side of square : ";
        cin>> side;
        cout<<"Is color filled: ";
        cin>> filled;
       if (filled == 1)
        {
             cout<<"Enter the color: (Press 0 for no and 1 for yes)";
             cin>> color;

        }
        Square newSquare(side,color,filled);
        cout << newSquare.toString() << endl;
    }
    else
        cout<< "Invalid input";
}
