#include "Circle.h"

// implement getArea()

bool Circle::setRadius(double r){
    if(r >= 1){
        radius = r;
        return true;
    }
    else{
        return false;
    }
}

double Circle::getRadius(){
    return radius;
}

double Circle::getArea(){
    double area = 0;

    area = PI * pow(radius,2.0);

    return area;
}