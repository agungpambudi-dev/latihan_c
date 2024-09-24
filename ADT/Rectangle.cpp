#include "Rectangle.h" //Mengimpor definisi kelas Rectangle yang terdapat di file header Rectangle.h

//Constructor                               //Inisialisasi nilai parameter yang diterima
Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

//Method untuk menghitung luas
double Rectangle::area() {
    return length * width;
}

//Method Setter
void Rectangle::setLength(double l) {
    length = l;
}

//Method Setter
void Rectangle::setWidth(double w) {
    width = w;
}

//Method Getter
double Rectangle::getLength() {
    return length;
}

//Method Getter
double Rectangle::getWidth() {
    return width;
}