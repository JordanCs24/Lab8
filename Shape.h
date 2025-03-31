#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
using namespace std;
class Shape
{
private:
  std::string name;
public:
  Shape() = default;
  Shape(std::string name) : name(name) {};
  virtual string printName()final;
  virtual int getArea() const = 0;

  // implement printName() and tag it as 'final'
  // to prevent derived-classes from overriding it

  // implement getArea() as an abstract function

};

#endif
