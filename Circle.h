/*
Name: Jordan Sowell, Diego Masella
Date: 4/6/2025
Section: CPSC 1021
Time: 2 minutes
Description: Circle header file that holds the class Circle and the function declarations and variables
*/
#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"
#include <string>
using namespace std;
class Circle : public Shape{
private:
    double radius;
    double const PI = 3.14;
public:
    Circle() : radius(1.0) {};
    Circle(double radius){
        this->radius = radius;
    }
    bool setRadius(double r);
    double getRadius();
    virtual double getArea();
};
#endif
