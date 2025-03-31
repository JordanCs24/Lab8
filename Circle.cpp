#include "Circle.h"

// implement getArea()
double Circle::getArea(){
    double area = 0;

    area = PI * pow(radius,2.0);

    return area;
}