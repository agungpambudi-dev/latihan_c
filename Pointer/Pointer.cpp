#include <iostream>

using namespace std;

int main()
{
    // Deklarasi Variable
    int a;
    int b;
    // Deklarasi Pointer
    int *ptr_a;
    int *ptr_b;

    // Inisilisasi Variables
    a = 10;
    b = 20;
    ptr_a = &a; // ptr_a sekarang menyimpan alamat dari a
    ptr_b = &b; // ptr_b sekarang menyimpan alamat dari b

    cout << a << endl; // nilai dari variable a
    cout << b << endl; // nilai dari variable b
    cout << ptr_a << endl; // alamat dari variable a
    cout << ptr_b << endl; // alamat dari variable b
    cout << *ptr_a << endl; // nilai dari variable a menggunakan alamat dari ptr_a
    cout << *ptr_b << endl; // nilai dari variable b menggunakan alamat dari ptr_b

    // Assign nilai menggunakan pointer
    *ptr_a = 30; 
    *ptr_b = 40;

    cout << "-- nilai variable setelah diubah menggunakan pointer --" << endl;
    cout << a << endl;
    cout << b << endl;

    return 0;
}
