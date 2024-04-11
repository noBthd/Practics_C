#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "stack.h"


void* push_stack(void* _stackElem) {
    struct StackElem* tmp = (struct StackElem*)_stackElem;
    struct Node* new_head = malloc(sizeof(struct Node));

    new_head->data = *((struct Student*)tmp->elem);
    new_head->next = tmp->stack->head;
    tmp->stack->head = new_head;
    tmp->stack->size += 1;
    return NULL;
};

void* pop_stack(void* stack) {
    struct Stack* _stack = (struct Stack*)stack;
    if (_stack->size == 0) {
        return NULL;
    }
    struct Node* elem = _stack->head;
    struct Student* result = malloc(sizeof(struct Student));
    if (result == NULL) {
        return NULL;
    }
    *result = _stack->head->data;
    _stack->head = _stack->head->next;
    _stack->size -= 1;
    free(elem);
    return result;
};

void* init(void* result) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->head = NULL;
    stack->size = 0;
    stack->push = push_stack;
    stack->pop = pop_stack;
    return stack;
};
