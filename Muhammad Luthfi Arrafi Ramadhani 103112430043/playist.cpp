// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
#include <string>
using namespace std;

struct Node {
    string data;
    Node* next;
    Node* prev;
};

Node* head = NULL;

void tambahLaguDiAwal(string judulLagu) {
    // node baru
    Node* baru = new Node();
    baru->data = judulLagu;
    baru->prev = NULL;
    // hubungkan dengan head lama
    baru->next = head;
    if (head != NULL) {
        head->prev = baru;
    }
    // jadikan node baru sebagai head
    head = baru;

    cout << "Lagu '" << judulLagu << "' ditambahkan ke awal playlist." << endl;
}

void tampil() {
    // tampil semua lagu dari awal playlist
    cout << "\n--- Isi Playlist (dari awal) ---" << endl;
    Node* sekarang = head;
    if (!sekarang) {
        cout << "NULL" << endl;
        return;
    }
    while (sekarang) {
        cout << sekarang->data;
        if (sekarang->next) cout << " <-> ";
        sekarang = sekarang->next;
    }
    cout << " <-> NULL" << endl;
}

int main() {
    tambahLaguDiAwal("Melukis Senja - Budi Doremi");
    tambahLaguDiAwal("Halu - Feby Putri");
    tampil();

    return 0;
}