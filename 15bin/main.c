#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "stack.h"


int main() {
    struct Student* student1 = (struct Student*)studentInit("test1", "test1", "m", 11, 207, 5.0, 5.0, 5.0);
    struct Student* student2 = (struct Student*)studentInit("test2", "test2", "m", 11, 207, 5.0, 5.0, 2.2);
    struct Student* student3 = (struct Student*)studentInit("test3", "test3", "m", 11, 206, 5.0, 5.0, 5.0);
    
    void* students = stackInit(NULL);

    struct StackElem stdPushElems;

    stdPushElems.stack = students;

    stdPushElems.elem = student1;
    stdPushElems.stack->push(&stdPushElems);

    stdPushElems.elem = student2;
    stdPushElems.stack->push(&stdPushElems);
    
    stdPushElems.elem = student3;
    stdPushElems.stack->push(&stdPushElems);

//////////////////////////////////////////////////////////////////////////////////////////

    struct Student* st1 = (struct Student*)studentInit("qweqwewqweq", "etqweeqweqwe", "f", 11, 207, 5.0, 5.0, 5.0);
    struct Stack* studs = stackInit(studs); 

    st1->saveToBinary(st1);
    studs->loadFromBinary(studs);

//////////////////////////////////////////////////////////////////////////////////////////

    return 0;
}

//////////////////////////////////////////////////////////////////////////////////////////
    // while (((struct Stack*)students)->size > 0) {
    //     struct Student* tmp = (struct Student*)((struct Stack*)students)->pop(students);
    //     if (tmp->group == 207 && tmp->mathMark == 5.0 && tmp->physicsMark == 5.0 && tmp->chemistryMark == 5.0) {
    //         //tmp->infoOutput(tmp);
    //     }
    //     free(tmp);
    // }

    // free(students);


    // while (studs->size > 0) {
    //     struct Student* tmp = studs->pop(studs);
    //     if (tmp != NULL) {
    //         tmp->infoOutput(tmp);
    //         free(tmp);
    //     }
    // }