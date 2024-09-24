#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    double length, width;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> length;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> width;

    Rectangle rect(length, width);

    cout << "Luas persegi panjang: " << rect.area() << endl;
    cout << "GetLength : " << rect.getLength() << endl;

    return 0;
}