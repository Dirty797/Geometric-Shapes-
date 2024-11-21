#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;
public:

    Rectangle();

    Rectangle(double l, double w);

    double getLength() const;

    double getWidth() const;

    void setLength(double l);
  
    void setWidth(double w);
    
    bool isSquare() const;
    
    double area() const;
   
    double perimeter() const;
    
    double diagonal() const;
    
    void dispRectangle() const;
};

#endif // RECTANGLE_H
