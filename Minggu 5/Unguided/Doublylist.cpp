// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include "Doublylist.h"

void createList(List &L) {
    L.first = NULL;
    L.last = NULL;
}

Node* alokasi(Kendaraan x) {
    Node* P = new Node;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void dealokasi(Node* P) {
    delete P;
}

bool isExist(List L, string nopol) {
    Node* temp = L.first;
    while (temp != NULL) {
        if (temp->info.nopol == nopol)
            return true;
        temp = temp->next;
    }
    return false;
}

void insertLast(List &L, Node* P) {
    if (L.first == NULL) {
        L.first = L.last = P;
    } else {
        L.last->next = P;
        P->prev = L.last;
        L.last = P;
    }
}

void printInfo(List L) {
    Node* temp = L.first;
    if (temp == NULL) {
        cout << "List kosong." << endl;
        return;
    }

    cout << "\nDATA LIST 1" << endl;
    while (temp != NULL) {
        cout << "no polisi : " << temp->info.nopol << endl;
        cout << "warna     : " << temp->info.warna << endl;
        cout << "tahun     : " << temp->info.thnBuat << endl;
        temp = temp->next;
    }
}

Node* findElm(List L, string nopol) {
    Node* temp = L.first;
    while (temp != NULL) {
        if (temp->info.nopol == nopol) {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}

void deleteElm(List &L, string nopol) {
    Node* target = findElm(L, nopol);

    if (target == NULL) {
        cout << "data dengan nomor polisi " << nopol << " tidak ditemukan\n";
        return;
    }

    if (L.first == L.last) {
        L.first = L.last = NULL;
    }

    else if (target == L.first) {
        L.first = target->next;
        L.first->prev = NULL;
    }
  
    else if (target == L.last) {
        L.last = target->prev;
        L.last->next = NULL;
    }
 
    else {
        target->prev->next = target->next;
        target->next->prev = target->prev;
    }

    cout << "data dengan nomor polisi " << nopol << " berhasil dihapus\n";
    dealokasi(target);
}
