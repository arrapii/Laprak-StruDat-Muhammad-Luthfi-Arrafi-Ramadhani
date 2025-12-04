// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
#include "bstree.h"
#include "bstree.cpp"
using namespace std;

int main() {
    cout << "Hello World!" << endl;

    address root = Nil;

    insertNode(root, 6);
    insertNode(root, 4);
    insertNode(root, 7);
    insertNode(root, 2);
    insertNode(root, 5);
    insertNode(root, 1);
    insertNode(root, 3);

    // InOrder(root);
    // cout << endl;
    // // SOAL 2
    // cout << "kedalaman : " << hitungKedalaman(root, 0) << endl;
    // cout << "jumlah node : " << hitungNode(root) << endl;
    // cout << "total : " << hitungTotal(root) << endl;

    // SOAL 3
    cout << "\npre-order: ";
    PreOrder(root);

    cout << "\npost-order: ";
    PostOrder(root);

    return 0;
}
