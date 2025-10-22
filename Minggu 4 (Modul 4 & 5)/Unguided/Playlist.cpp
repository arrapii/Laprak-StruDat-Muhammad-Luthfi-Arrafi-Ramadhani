// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include "Playlist.h"

Playlist::Playlist() {
    head = nullptr;
}

Playlist::~Playlist() {
    Lagu* current = head;
    while (current != nullptr) {
        Lagu* temp = current;
        current = current->next;
        delete temp;
    }
}

void Playlist::tambahDepan(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, nullptr};
    baru->next = head;
    head = baru;
    cout << "Lagu \"" << judul << "\" berhasil ditambahkan di awal playlist.\n";
}

void Playlist::tambahBelakang(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, nullptr};

    if (head == nullptr) {
        head = baru;
    } else {
        Lagu* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = baru;
    }
    cout << "Lagu \"" << judul << "\" berhasil ditambahkan di akhir playlist.\n";
}

void Playlist::tambahSetelahKe3(string judul, string penyanyi, float durasi) {
    Lagu* baru = new Lagu{judul, penyanyi, durasi, nullptr};

    if (head == nullptr) {
        cout << "Playlist masih kosong.\n";
        delete baru;
        return;
    }

    Lagu* temp = head;
    int posisi = 1;
    while (temp != nullptr && posisi < 3) {
        temp = temp->next;
        posisi++;
    }

    if (temp == nullptr) {
        cout << "Jumlah lagu kurang dari 3, tidak bisa menambah setelah lagu ke-3.\n";
        delete baru;
        return;
    }

    baru->next = temp->next;
    temp->next = baru;
    cout << "Lagu \"" << judul << "\" berhasil ditambahkan setelah lagu ke-3.\n";
}

void Playlist::hapusLagu(string judul) {
    if (head == nullptr) {
        cout << "Playlist kosong.\n";
        return;
    }

    Lagu* temp = head;
    Lagu* prev = nullptr;

    while (temp != nullptr && temp->judul != judul) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Lagu dengan judul \"" << judul << "\" tidak ditemukan.\n";
        return;
    }

    if (prev == nullptr) {
        head = temp->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
    cout << "Lagu \"" << judul << "\" berhasil dihapus dari playlist.\n";
}

void Playlist::tampilkan() {
    if (head == nullptr) {
        cout << "Playlist kosong.\n";
        return;
    }

    Lagu* temp = head;
    int i = 1;
    cout << "\n=== Daftar Lagu di Playlist ===\n";
    while (temp != nullptr) {
        cout << i << ". Judul: " << temp->judul
             << " | Penyanyi: " << temp->penyanyi
             << " | Durasi: " << temp->durasi << " menit\n";
        temp = temp->next;
        i++;
    }
    cout << "==============================\n";
}
