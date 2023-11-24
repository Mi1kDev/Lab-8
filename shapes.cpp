#include "shapes.h"
#include <iostream>
#include <vector>

Shape::Shape(std::string name)
{
  this->name = name;
}

Shape::~Shape()
{
}

std::string Shape::description()
{
  return name + " has area: " + std::to_string(area());
}

Square::Square(double width) : Shape("Square")
{
  this->width = width;
}

double Square::area()
{
  return width * width;
}

Rectangle::Rectangle(double width, double height) : Shape("Rectangle")
{
  this->width = width;
  this->height = height;
}

double Rectangle::area()
{
  return width * height;
}

Circle::Circle(double radius) : Shape("Circle")
{
  this->radius = radius;
}

double Circle::area()
{
  return 2 * (3.14 * (radius * radius));
}

int main(){
  std::vector<Shape *> shapeList;
  shapeList.push_back(new Square(10));
  shapeList.push_back(new Rectangle(10, 20));
  shapeList.push_back(new Circle(5));
  for(int i = 0; i < shapeList.size(); i++){
    std::cout << shapeList[i]->description() << std::endl;
  }
  return 0;
}
