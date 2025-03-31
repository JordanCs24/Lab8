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
