#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "stack.h"

#define PI 3.14159
#define SQUARE(x) ({ \
    typeof(x) _temp = (x); \
    _temp * _temp; \
})


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

    int a = 5;
    printf("\n%d\n", SQUARE(a++));

    free(students);

    return 0;
}
