// Muhammad Luthfi Arrafi Ramadhani
// 103112430043
// IF 12-06

#ifndef STACK_H
#define STACK_H

const int MAX = 20;
typedef int infotype;

struct Stack {
    infotype info[MAX];
    int top;
};

void CreateStack(Stack &S);
void Push(Stack &S, infotype x);
infotype Pop(Stack &S);
void printInfo(const Stack &S);
void balikStack(Stack &S);
void pushAscending(Stack &S, infotype x);
void getInputStream(Stack &S);

#endif