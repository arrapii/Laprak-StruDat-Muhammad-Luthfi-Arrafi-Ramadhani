// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#ifndef DOUBLYLIST_H
#define DOUBLYLIST_H
#include <iostream>
using namespace std;

struct Kendaraan {
    string nopol;
    string warna;
    int thnBuat;
};

struct Node {
    Kendaraan info;
    Node *next;
    Node *prev;
};

struct List {
    Node *first;
    Node *last;
};

void createList(List &L);
Node* alokasi(Kendaraan x);
void dealokasi(Node* P);
void insertLast(List &L, Node* P);
void printInfo(List L);
bool isExist(List L, string nopol);
Node* findElm(List L, string nopol);
void deleteElm(List &L, string nopol);

#endif


