// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#include <iostream>
#include "stack.h"
using namespace std;

void createStack(Stack &S){
    S.top = -1; 
}

bool isEmpty(Stack S){
    return (S.top == -1);
}

bool isFull(Stack S){
    return (S.top == MAX - 1);
}

void push(Stack &S, infotype x){
    if(!isFull(S)){
        S.top++;
        S.info[S.top] = x;
    } else {
        cout << "Stack penuh..." << endl;
    }
}

infotype pop(Stack &S){
    if(!isEmpty(S)){
        int temp = S.info[S.top];
        S.top--;
        return temp;
    } else {
        cout << "Stack kosong, tidak ada yang bisa dipop." << endl;
        return -1; 
    }
}

void printInfo(Stack S){
    if(isEmpty(S)){
        cout << "Stack kosong." << endl;
    } else {
        for(int i = 0; i <= S.top; i++){
            cout << S.info[i] << " ";
        }
        cout << endl;
    }
}
void balikStack(Stack &S){
    Stack temp;
    createStack(temp);

    while(!isEmpty(S)){
        push(temp, pop(S));
    }

    S = temp;
}

