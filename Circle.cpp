#include <iostream>
#include "Circle.h"
using namespace std;

Circle::Circle() : radius(10.0) {}

Circle::Circle(double r) : radius(r) {}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::area() const {
    return PI * radius * radius;
}

double Circle::diameter() const {
    return 2 * radius;
}

double Circle::circumference() const {
    return 2 * PI * radius;
}

void Circle::dispCircle() const {
    cout << "Circle: radius = " << radius
              << ", area = " << area()
              << ", diameter = " << diameter()
              << ", circumference = " << circumference() << endl;
}
