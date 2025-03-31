/*
Names: Jordan Sowell, Diego Masella
Section: CPSC 1021
Date: 4/6/2025
Time: 20 minutes
Description: a program that uses (runtime) polymorphism to print
the name and area of each shape by calling the respective functions from the base class.
*/
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Trapezoid.h"
#include <iostream>
#include <iomanip>
#include <memory>

#include <vector>

using namespace std;

int main()
{
  Circle circle(2.0);
  Square square(2.0);
  Rectangle rectangle(2.5,3.0);
  Trapezoid trapezoid(2.5,3.5,4.0);

  vector<Shape*> shapeVect;
  shapeVect.push_back(&circle);
  shapeVect.push_back(&square);
  shapeVect.push_back(&rectangle);
  shapeVect.push_back(&trapezoid);

  // make a vector 'vector<Type>shapeVect {element0, element1, element2, element3}'
  // where 'Type' is a pointer to class Shape and each element is the memory address
  // of one of objects you have instantiated above

  for (auto it : shapeVect){
    cout << "Area of " << it->printName(e) << "is: "<< it->getArea() << endl;  
  }
  return 0;
}
