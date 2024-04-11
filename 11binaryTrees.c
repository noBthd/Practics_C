#include <stdio.h>
#include <stdlib.h>


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

struct Tree {
    struct Student **data;
    struct Tree* left;
    struct Tree* right;
    int size;
    void (*addNode)(struct Tree *node, struct Student *data); 
    void (*clear)(struct Tree *node); 
    void (*stSearchOut)(struct Tree* node, int group);
};

void studentSearchAndOut(struct Tree* node, int group);
void addTreeNode(struct Tree *node, struct Student *data); 
void treeClear(struct Tree *node); 

struct Tree *treeInit(struct Student *data) {
    struct Tree *result = malloc(sizeof(struct Tree));
    result->data = malloc(sizeof(struct Student*));
    result->size = 1;
    result->data[0] = data;
    result->left = NULL;
    result->right = NULL;
    result->clear = treeClear;
    result->addNode = addTreeNode;
    result->stSearchOut = studentSearchAndOut;
    return result;
};

void addTreeNode(struct Tree *node, struct Student *data) {
    if(node->data[0]->group < data->group){
        if(node->left == NULL) {
            node->left = treeInit(data);
            return;
        }
        node->left->addNode(node->left, data);
        return;
    } else if(node->data[0]->group > data->group) {
        if(node->right == NULL) {
            node->right = treeInit(data);
            return;
        }
        node->right->addNode(node->right, data);
        return;
    } else if(node->data[0]->group == data->group) {
        node->size++;
        node->data = realloc(node->data, node->size * sizeof(struct Student*));
        node->data[node->size - 1] = data; 
        return;
    }
}

void treeClear(struct Tree* node) {
    if(node->left == NULL)
        free(node->left);
    if(node->right == NULL)
        free(node->right);

    for (int i = 0; i < node->size; i++) { 
        free(node->data[i]->surname); 
        free(node->data[i]->name); 
        free(node->data[i]->sex); 
        free(node->data[i]);
    } 
    free(node->data); 
    free(node); 
}

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

void studentSearchAndOut(struct Tree* node, int group) {
    if(node == NULL) {
        return;
    }

    for(int i = 0; i < node->size; i++) {
        if((node->data[i]->group == group) && (node->data[i]->mathMark == 5.0) && (node->data[i]->physicsMark == 5.0) && (node->data[i]->chemistryMark == 5.0))
            node->data[i]->infoOutput(node->data[i]);
    }

    studentSearchAndOut(node->left, group);
    studentSearchAndOut(node->right, group);
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
    
    struct Tree* students[25];
    students[0] = treeInit(student1);
    students[0]->addNode(students[0], student2);
    students[0]->addNode(students[0], student3);

    students[0]->stSearchOut(students[0], 207);

    return 0;
}