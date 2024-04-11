#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Student {
    char *surname;
    char *name;
    char *sex;
    int age;
    int group;
    float mathMark;
    float physicsMark;
    float chemistryMark;
    void* (*infoOutput)(void*);
};

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

void* push_stack(void* _stackElem) {
    struct StackElem* tmp = (struct StackElem*)_stackElem;
    struct Node* new_head = malloc(sizeof(struct Node));

    new_head->data = *((struct Student*)tmp->elem);
    new_head->next = tmp->stack->head;
    tmp->stack->head = new_head;
    tmp->stack->size += 1;
    return NULL;
}

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
}


void* init(void* result) {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->head = NULL;
    stack->size = 0;
    stack->push = push_stack;
    stack->pop = pop_stack;
    return stack;
};

void* infoOutput(void* student) {
    struct Student* s = (struct Student*)student;
    printf("Фамилия: %s\n", s->surname);
    printf("Имя: %s\n", s->name);
    printf("Пол: %s\n", s->sex);
    printf("Возраст: %d\n", s->age);
    printf("Группа: %d\n", s->group);
    printf("Отметка по математике: %f\n", s->mathMark); 
    printf("Отметка по физике: %f\n", s->physicsMark);
    printf("Отметка по химии: %f\n", s->chemistryMark); 
    printf("\n");
    return NULL;
}

void* studentInit(void *surname, void *name, void *sex, int age, int group, float mathMark, float physicsMark, float chemistryMark) {
    struct Student* result = (struct Student*)malloc(sizeof(struct Student));
    result->surname = (char*)surname;
    result->name = (char*)name;
    result->sex = (char*)sex;
    result->age = age;
    result->group = group;
    result->mathMark = mathMark;
    result->physicsMark = physicsMark;
    result->chemistryMark = chemistryMark;
    result->infoOutput = infoOutput;
    return result;
};

int main() {
    struct Student* student1 = (struct Student*)studentInit ("test1", "test1", "m", 11, 207, 5.0, 5.0, 5.0);
    struct Student* student2 = (struct Student*)studentInit("test2", "test2", "m", 11, 207, 5.0, 5.0, 2.2);
    struct Student* student3 = (struct Student*)studentInit("test3", "test3", "m", 11, 206, 5.0, 5.0, 5.0);
    
    void* students = init(NULL);

    struct StackElem stdPushElems;

    stdPushElems.stack = students;

    stdPushElems.elem = student1;
    stdPushElems.stack->push(&stdPushElems);

    stdPushElems.elem = student2;
    stdPushElems.stack->push(&stdPushElems);

    stdPushElems.elem = student3;
    stdPushElems.stack->push(&stdPushElems);

    while (((struct Stack*)students)->size > 0) {
        struct Student* tmp = (struct Student*)((struct Stack*)students)->pop(students);
        if (tmp->group == 207 && tmp->mathMark == 5.0 && tmp->physicsMark == 5.0 && tmp->chemistryMark == 5.0) {
            tmp->infoOutput(tmp);
        }
        free(tmp);
    }

    free(students);

    return 0;
}
