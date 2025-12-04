// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#ifndef BSTREE_H
#define BSTREE_H
#include <iostream>
using namespace std;

#define Nil NULL

typedef int infotype;

struct Node {
    infotype info;
    Node* left;
    Node* right;
};

typedef Node* address;

address alokasi(infotype x);
void insertNode(address &root, infotype x);
address findNode(infotype x, address root);
void InOrder(address root);

// SOAL 2
int hitungNode(address root);
int hitungTotal(address root);
int hitungKedalaman(address root, int start);

// SOAL 3
void PreOrder(address root);
void PostOrder(address root);

#endif
