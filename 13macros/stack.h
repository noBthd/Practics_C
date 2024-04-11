#ifndef STACK_H
#define STACK_H


struct Node {
    struct Student data;
    struct Node* next;
};

struct Stack {
    struct Node* head;
    unsigned long int size;
    void* (*push)(void*);
    void* (*pop)(void*);
};

struct StackElem{
    struct Stack* stack;
    void* elem;
};

void* init(void* result); 

#endif
