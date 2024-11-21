#include <iostream>
#include "Triangle.h"
using namespace std;

Triangle::Triangle() : base(6.0), height(5.5) {}

Triangle::Triangle(double b, double h) : base(b), height(h) {}

double Triangle::getBase() const {
    return base;
}

double Triangle::getHeight() const {
    return height;
}

void Triangle::setBase(double b) {
    base = b;
}

void Triangle::setHeight(double h) {
    height = h;
}

double Triangle::area() const {
    return 0.5 * base * height;
}

double Triangle::perimeter() const {
    return 3 * base;
}

void Triangle::dispTriangle() const {
    cout << "Triangle: base = " << base
              << ", height = " << height
              << ", area = " << area()
              << ", perimeter = " << perimeter() << endl;
}
