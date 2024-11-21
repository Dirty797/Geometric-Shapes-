#include <iostream>
#include <cmath> 
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() : length(5.0), width(3.25) {}

Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setLength(double l) {
    length = l;
}

void Rectangle::setWidth(double w) {
    width = w;
}

bool Rectangle::isSquare() const {
    return length == width;
}

double Rectangle::area() const {
    return length * width;
}

double Rectangle::perimeter() const {
    return 2 * (length + width);
}

double Rectangle::diagonal() const {
    return sqrt(length * length + width * width);
}

void Rectangle::dispRectangle() const {
    cout << "Rectangle: length = " << length
              << ", width = " << width
              << ", area = " << area()
              << ", perimeter = " << perimeter()
              << ", diagonal = " << diagonal()
              << ", isSquare = " << (isSquare() ? "true" : "false") << endl;
}
