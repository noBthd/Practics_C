#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "stack.h"


void* push_stack(void*);
void* pop_stack(void*);
void* loadFromTxt(void*);

void* stackInit(void* result) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->head = NULL;
    stack->size = 0;
    stack->push = push_stack;
    stack->pop = pop_stack;
    stack->loadFromTxt = loadFromTxt;
    return stack;
};

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

void* loadFromTxt(void* stack){
    struct Stack* _stack = (struct Stack*)stack;

    FILE* fp;

    fp = fopen("/Users/egorkirichenko/Projects/C/14txt/data.txt", "r");

    struct Student* _student = (struct Student*)studentInit("a", "a", "m", 0, 0, 0, 0, 0);
    struct StackElem stdPushElems;
    stdPushElems.stack = _stack;

    while(!feof(fp)){
        fscanf(fp, "%s %s %s %d %d %f %f %f", _student->surname, _student->name, _student->sex
                , &_student->age, &_student->group, &_student->mathMark
                , &_student->physicsMark, &_student->chemistryMark);

        stdPushElems.elem = _student;
        stdPushElems.stack->push(&stdPushElems);
    }

    fclose(fp);

    return NULL;
}
