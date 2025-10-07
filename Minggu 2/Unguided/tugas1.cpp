// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    const int JUMLAH_MHS = 5, JUMLAH_MK = 3;
    string nama[JUMLAH_MHS];
    float nilai[JUMLAH_MHS][JUMLAH_MK];
    float rata[JUMLAH_MHS];

    int idx_terbaik = 0;
    float rata_tertinggi = 0;


    for (int i = 0; i < JUMLAH_MHS; i++) {
        cout << "Masukkan nama mahasiswa ke-" << i + 1 << ": ";
        getline(cin >> ws, nama[i]);
        float total = 0;
        for (int j = 0; j < JUMLAH_MK; j++) {
            cout << "  Nilai mata kuliah ke-" << j + 1 << ": ";
            cin >> nilai[i][j];
            total += nilai[i][j];
        }
        rata[i] = total / JUMLAH_MK;
        if (rata[i] > rata_tertinggi) {
            rata_tertinggi = rata[i];
            idx_terbaik = i;
        }
    }

    cout << "\n==============================================================================\n";
    cout << left << setw(20) << "Nama"
         << setw(12) << "Matkul 1"
         << setw(12) << "Matkul 2"
         << setw(12) << "Matkul 3"
         << setw(12) << "Rata-rata"
         << "Keterangan" << endl;
    cout << "------------------------------------------------------------------------------\n";
    for (int i = 0; i < JUMLAH_MHS; i++) {
        cout << left << setw(20) << nama[i];
        for (int j = 0; j < JUMLAH_MK; j++) {
            cout << setw(12) << nilai[i][j]; 
        }
        cout << setw(12) << fixed << setprecision(2) << rata[i]; 
        if (i == idx_terbaik) cout << "Terbaik!";
        cout << endl;
    }
    cout << "==============================================================================\n";
    return 0;
}

