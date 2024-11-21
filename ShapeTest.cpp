#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"
using namespace std;

int main() {
    
    cout << "Circle Class Test:" << endl;
    Circle circle1;
    Circle circle2(5.5);

    cout << "Initial Circle States:" << endl;
    circle1.dispCircle();
    circle2.dispCircle();

    circle2.setRadius(12.5);
    cout << "Updated Circle 2:" << endl;
    circle2.dispCircle();

    
    cout << "\nTriangle Class Test:" << endl;
    Triangle triangle1;
    Triangle triangle2(6.25, 9.75);

    cout << "Initial Triangle States:" << endl;
    triangle1.dispTriangle();
    triangle2.dispTriangle();

    triangle2.setBase(8.0);
    triangle2.setHeight(12.5);
    cout << "Updated Triangle 2:" << endl;
    triangle2.dispTriangle();


    cout << "\nRectangle Class Test:" << endl;
    Rectangle rectangle1;
    Rectangle rectangle2(10.25, 8.75);

    cout << "Initial Rectangle States:" << endl;
    rectangle1.dispRectangle();
    rectangle2.dispRectangle();

    rectangle2.setLength(15.0);
    rectangle2.setWidth(10.5);
    cout << "Updated Rectangle 2:" << endl;
    rectangle2.dispRectangle();

    
    cout << "\nSquare Class Test (handled by Rectangle):" << endl;
    Rectangle square(6.75, 6.75);

    cout << "Initial Square State:" << endl;
    square.dispRectangle();

    square.setLength(9.0);
    square.setWidth(9.0);
    cout << "Updated Square State:" << endl;
    square.dispRectangle();

    return 0;
}
