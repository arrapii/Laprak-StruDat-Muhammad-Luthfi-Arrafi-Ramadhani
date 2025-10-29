// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include "Doublylist.h"

int main() {
    List L;
    createList(L);

    while (true) {
        Kendaraan k;
        cout << "\nmasukkan nomor polisi: ";
        cin >> k.nopol;

        if (k.nopol == "-") {
            break;
        }

        cout << "masukkan warna kendaraan: ";
        cin >> k.warna;
        cout << "masukkan tahun kendaraan: ";
        cin >> k.thnBuat;

        if (isExist(L, k.nopol)) {
            cout << "nomor polisi sudah terdaftar\n";
            continue;
        }

        insertLast(L, alokasi(k));
    }

    printInfo(L);

    string cari;
    cout << "\nMasukkan nomor polisi yang ingin dicari: ";
    cin >> cari;

    Node* hasil = findElm(L, cari);
    if (hasil != NULL) {
        cout << "\nData ditemukan:\n";
        cout << "Nomor Polisi : " << hasil->info.nopol << endl;
        cout << "Warna     : " << hasil->info.warna << endl;
        cout << "Tahun     : " << hasil->info.thnBuat << endl;
    } else {
        cout << "\ndata tidak ditemukan\n";
    }

    string hapus;
    cout << "\nMasukkan Nomor Polisi yang akan dihapus: ";
    cin >> hapus;
    deleteElm(L, hapus);

    printInfo(L);

    return 0;
}




