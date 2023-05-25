

#include <iostream>

#include "polygon.h"
#include "rectangle.h"
#include "rhombus.h"
#include "RightTriangle.h"
#include "mainFunctions.h"

int main() 
{
    /// Test Rettangolo
    int w, l = 0;
    cout << "RECTANGLE TEST" << endl;
    cout << "Define Constructor" << endl;
    Rectangle rectangle(2, 3);
    cout << "Getters/setters test" << endl;
    rectangle.SetDim(3, 4);
    w = rectangle.GetWidth();
    l = rectangle.GetLength();
    cout << "Width of rectangle:" << endl;
    cout << w << endl;
    cout << "Length of rectangle:" << endl;
    cout << l << endl;
    cout << endl;
    cout << "Area and perimeter" << endl;
    cout << "Area of rectangle:" << endl;
    cout << rectangle.GetArea() << endl;
    cout << "Perimeter of rectangle:" << endl;
    cout << rectangle.GetPerimeter() << endl;
    cout << endl;
    rectangle.Dump();


    /// Test Rombo

    cout << "RHOMBUS TEST" << endl;
    int dH, dV = 0;
    cout << "A constructor" << endl;
    Rhombus rhombus(2, 6);
    cout << "Getters/setters test" << endl;
    rhombus.SetDim(2, 4);
    dH = rhombus.GetHorD();
    dV = rhombus.GetVerD();
    cout << "Horizontal diagonal of rhombus:" << endl;
    cout << dH << endl;
    cout << "Vertical diagonal of rhombus:" << endl;
    cout << dV << endl;
    cout << endl;

    cout << "Test Area and perimeter" << endl;
    cout << "Area of rhombus:" << endl;
    cout << rhombus.GetArea() << endl;
    cout << "Perimeter of rhombus:" << endl;
    cout << rhombus.GetPerimeter() << endl;
    cout << endl;
    rhombus.Dump();


    /// RIGHT TRIANGLE TEST

    cout << "RIGHT TRIANGLE TEST" << endl;

    cout << "A constructor" << endl;
    RightTriangle righttriangle(1, 5);

    int bs, al = 0;
    cout << "Getters/setters test" << endl;
    righttriangle.SetDim(5, 3);
    bs = righttriangle.GetBase();
    al = righttriangle.GetAltitude();
    cout << "Base of righttriangle:" << endl;
    cout << bs << endl;
    cout << "Altitude of righttriangle:" << endl;
    cout << al << endl;
    cout << endl;

    cout << " Test Area and perimeter" << endl;
    cout << "Area of righttriangle:" << endl;
    cout << righttriangle.GetArea() << endl;
    cout << "Perimeter of A:" << endl;
    cout << righttriangle.GetPerimeter() << endl;
    cout << endl;
    righttriangle.Dump();
	return 0;
}

	
