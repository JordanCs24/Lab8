#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "Shape.h"
#include <string>
using namespace std;
class Circle : Shape{
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
    double getArea();
};
#endif
