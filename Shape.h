/*
Name: Jordan Sowell, Diego Masella
Date: 4/6/2025
Section: CPSC 1021
Time: 2 minutes
Description: Shape header file that holds the pure abstract base class called shape
*/
#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
class Shape
{
private:
  std::string name;
public:
  Shape() = default;
  Shape(std::string name) : name(name) {};
  // implement printName() and tag it as 'final'
  // to prevent derived-classes from overriding it
  virtual std::string printName()final{
    return name;
  };
  virtual double getArea() = 0; // implement getArea() as an abstract function

};

#endif
