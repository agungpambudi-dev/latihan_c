#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w); // Constructor
    double area(); // Method untuk menghitung luas
    void setLength(double l);
    void setWidth(double w);
    double getLength();
    double getWidth();
};

#endif // RECTANGLE_H