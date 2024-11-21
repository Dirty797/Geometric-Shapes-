#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
private:
    double radius;
    static constexpr double PI = 3.141592;
public:

    Circle();

    Circle(double r);

    double getRadius() const;

    void setRadius(double r);

    double area() const;

    double diameter() const;

    double circumference() const;

    void dispCircle() const;
};

#endif // CIRCLE_H
