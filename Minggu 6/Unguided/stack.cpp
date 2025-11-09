// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include "stack.h"
#include <iostream>
#include <cctype>
using namespace std;

void CreateStack(Stack &S) {
    S.top = -1;
}

void Push(Stack &S, infotype x) {
    if (S.top >= MAX - 1) {
        cout << "Stack penuh, tidak dapat push!" << endl;
        return;
    }
    S.top++;
    S.info[S.top] = x;
}

void pushAscending(Stack &S, infotype x) {
    if (S.top >= MAX - 1) {
        cout << "Stack penuh, tidak dapat push!" << endl;
        return;
    }
    int j = S.top;
   
    while (j >= 0 && S.info[j] > x) {
        S.info[j + 1] = S.info[j];
        j--;
    }
    S.info[j + 1] = x;
    S.top++;
}

infotype Pop(Stack &S) {
    if (S.top == -1) {
        cout << "Stack kosong, tidak dapat pop!" << endl;
        return 0;
    }
    infotype val = S.info[S.top];
    S.top--;
    return val;
}

void printInfo(const Stack &S) {
    if (S.top == -1) {
        cout << "[TOP]" << endl;
        return;
    }
    cout << "[TOP] ";
    for (int i = S.top; i >= 0; --i) {
        cout << S.info[i];
        if (i > 0) cout << " ";
    }
    cout << endl;
}

void balikStack(Stack &S) {
    int i = 0, j = S.top;
    while (i < j) {
        infotype tmp = S.info[i];
        S.info[i] = S.info[j];
        S.info[j] = tmp;
        i++; j--;
    }
}

void getInputStream(Stack &S) {
    char ch;
    while (true) {
        ch = cin.get();
        if (ch == '\n' || ch == EOF) break;
        if (isdigit(static_cast<unsigned char>(ch))) {
            Push(S, static_cast<infotype>(ch - '0'));
        }
    }
}