/*
Names: Jordan Sowell, Diego Masella
Section: CPSC 1021
Date: 4/6/2025
Time: 10 minutes
Description: Circle cpp file that holds the getArea function
*/
#include "Circle.h"

// implement getArea()
double Circle::getArea(){
    double area = 0;

    area = PI * pow(radius,2.0);

    return area;
}