// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
using namespace std;

string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

string angkaKeTulisan(int n) {
    if (n == 100) return "seratus";
    if (n < 10) return satuan[n];
    if (n < 20) return belasan[n - 10];
    int puluh = n / 10;
    int satu = n % 10;
    if (satu == 0) return puluhan[puluh]; 
    return puluhan[puluh] + " " + satuan[satu];
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka di luar jangkauan!" << endl;
    } else {
        cout << angka << " : " << angkaKeTulisan(angka) << endl;
    }
    return 0;
}