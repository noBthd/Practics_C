#include <stdio.h>
#include <stdlib.h>
#include "student.h"


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
};

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
