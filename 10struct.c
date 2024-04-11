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
    void (*infoOutput)(struct Student *student);
};

struct Node {
    struct Student data;
    struct Node* next;
};

struct Stack {
    struct Node* head;
    unsigned long int size;
    void (*push)(struct Stack* stack, struct Student elem);
    struct Student (*pop)(struct Stack* stack);
};

void push_stack(struct Stack* stack, struct Student elem) {
    struct Node* new_head = malloc(sizeof(struct Node));
    new_head->data = elem;
    new_head->next = stack->head;
    stack->head = new_head;
    stack->size += 1;
}

struct Student pop_stack(struct Stack* stack) {
    if (stack->size == 0) {
        struct Student student; 
        return student;
    }
    struct Node* elem = stack->head;
    struct Student result = stack->head->data;
    stack->head = stack->head->next;
    stack->size -= 1;
    free(elem);
    return result;

}

struct Stack* init(struct Stack* result) {
    result = malloc(sizeof(struct Student));
    result->head = NULL;
    result->size = 0;
    result->push = push_stack;
    result->pop = pop_stack;
    return result;
};

void infoOutput(struct Student *student) {
    printf("Фамилия: %s\n", student->surname);
    printf("Имя: %s\n", student->name);
    printf("Пол: %s\n", student->sex);
    printf("Возраст: %d\n", student->age);
    printf("Группа: %d\n", student->group);
    printf("Отметка по математике: %f\n", student->mathMark); 
    printf("Отметка по физике: %f\n", student->physicsMark);
    printf("Отметка по химии: %f\n", student->chemistryMark); 
    printf("\n");
}

struct Student* studentInit(char *surname, char *name, char *sex, int age, int group, float mathMark, float physicsMark, float chemistryMark) {
    struct Student* result = malloc(sizeof(struct Student));
    result->surname = surname;
    result->name = name;
    result->sex = sex;
    result->age = age;
    result->group = group;
    result->mathMark = mathMark;
    result->physicsMark = physicsMark;
    result->chemistryMark = chemistryMark;
    result->infoOutput = infoOutput;
    return result;
};

int main() {
    struct Student* student1 = studentInit("test1", "test1", "m", 11, 207, 5.0, 5.0, 5.0);
    struct Student* student2 = studentInit("test2", "test2", "m", 11, 207, 5.0, 5.0, 2.2);
    struct Student* student3 = studentInit("test3", "test3", "m", 11, 206, 5.0, 5.0, 5.0);
    
    struct Stack* students = init(students);

    students->push(students, *student1);
    students->push(students, *student2);
    students->push(students, *student3);

    while (students->size > 0) {
        struct Student tmp = students->pop(students);
        if (tmp.group == 207 && tmp.mathMark == 5.0 && tmp.physicsMark == 5.0 && tmp.chemistryMark == 5.0) {
            tmp.infoOutput(&tmp);
        }
    }

    return 0;
}
