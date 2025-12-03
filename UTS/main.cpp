// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    Stack S;
    createStack(S);

    cout << "Push: 2" << endl;
    push(S, 2);

    cout << "Push: 6" << endl;
    push(S, 6);

    cout << "Push: 1" << endl;
    push(S, 1);

    cout << "Push: 8" << endl;
    push(S, 8);

    cout << "Pop : " << pop(S) << endl;  

    cout << endl;
    cout << "Isi stack: ";
    printInfo(S);

    cout << "Balik stack" << endl;
    balikStack(S);

    cout << "Isi setelah dibalik: ";
    printInfo(S);

    return 0;
}

