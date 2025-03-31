/*
Name: Jordan Sowell, Diego Masella
Date: 4/6/2025
Section: CPSC 1021
Time: 2 minutes
Description: Square header file that holds class Square and the different functions and variables
*/
#ifndef SQUARE_H_
#define SQUARE_H_

#include "Shape.h"

class Square : public Shape{
    private:
        double side;
    public:
        Square() : side(0){};
        Square(double side){
            this->side = side;
        }
        double getArea();
};

#endif
