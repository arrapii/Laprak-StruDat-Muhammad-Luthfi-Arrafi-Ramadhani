// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Penjumlahan: " << (a + b) << endl;
    cout << "Pengurangan: " << (a - b) << endl;
    cout << "Perkalian: " << (a * b) << endl;

    if (b != 0) {
        cout << "Pembagian: " << (a / b) << endl;
    } else {
        cout << "Pembagian: Tidak bisa membagi dengan nol" << endl;
    }

    return 0;
}