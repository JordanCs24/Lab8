/*
Name: Jordan Sowell, Diego Masella
Date: 4/6/2025
Section: CPSC 1021
Time: 2 minutes
Description: Rectangle header file that holds the length and width variables. It also holds the functions declarations  
*/
#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "Shape.h"

class Rectangle : public Shape{
    private:
    double length;
    double width;
    public:
    Rectangle() : length(0), width(0){};
    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }
    double getArea();
};

#endif
