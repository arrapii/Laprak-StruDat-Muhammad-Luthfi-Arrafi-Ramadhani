// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Masukkan jumlah bilangan (N): ";
    cin >> N;

    int *arr = new int[N];

    cout << "Masukkan " << N << " bilangan:\n";
    for (int *p = arr; p < arr + N; ++p) {
        cout << "  Bilangan ke-" << (p - arr + 1) << ": ";
        cin >> *p;
    }

    int jumlah = 0, maks = *arr, min = *arr;
    for (int *p = arr; p < arr + N; ++p) {
        jumlah += *p;
        if (*p > maks) maks = *p;
        if (*p < min) min = *p;
    }

    cout << "\nHasil Perhitungan:\n";
    cout << "Jumlah      = " << jumlah << endl;
    cout << "Nilai Maks  = " << maks << endl;
    cout << "Nilai Min   = " << min << endl;

    delete[] arr;
    return 0;
}


