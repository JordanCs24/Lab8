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
