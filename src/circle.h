#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <cassert>
using namespace std;

class Circle {
  private:
    int radius;
  public:
    Circle(int radius); // 생성자
    Circle();
    Circle(const Circle& cir);
    ~Circle();  // 소멸자
    void setRadius(int radius); // 설정자
    int getRadius() const; // 접근자
    int getArea() const;
    int getPerimeter() const;
};

#endif