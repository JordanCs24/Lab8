/*
Names: Jordan Sowell, Diego Masella
Section: CPSC 1021
Date: 4/6/2025
Time: 10 minutes
Description: 
*/
#include "Trapezoid.h"

// implement getArea()

double Trapezoid::getArea(){
    double area = 0.5 * ((base1 + base2)* height);
    return area;
}