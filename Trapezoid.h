/*
Name: Jordan Sowell, Diego Masella
Date: 4/6/2025
Section: CPSC 1021
Time: 2 minutes
Description: Trapezoid header file that holds class Trapezoid and the different functions and variables such as base1,base2 and height
*/
#ifndef TRAPEZOID_H_
#define TRAPEZOID_H_

#include "Shape.h"

class Trapezoid  : public Shape{
    private:
        double base1;
        double base2;
        double height;
    public:
        Trapezoid() : base1(0), base2(0), height(0){};
        Trapezoid(double base1, double base2, double height){
            this-> base1 = base1;
            this->base2 = base2;
            this->height = height;
        }
        double getArea();
};

#endif
