#include "circle.h"

Circle::Circle(int rds) : radius(rds) {
  if (rds < 0) {
    assert(false);
  }
}

Circle::Circle() : radius(0) {}

Circle::Circle(const Circle& cir) : radius(cir.radius) {}

Circle::~Circle(){}

int Circle::getRadius() const {
  return radius;
}

int Circle::getArea() const {
  const int PI = 3;
  return radius * radius * 3;
}

int Circle::getPerimeter() const {
  const int PI = 3;
  return 2 * PI * radius;
}

