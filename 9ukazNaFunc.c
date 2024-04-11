#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void scan1DArr(int size, int arr[size]);
void out1DArr(int size, int arr[size]);
void evenToZero(int size, int arr[size]);
void scan2DArr(int n, int m, int arr[n][m]);
int countZero2DArr(int n, int m, int arr[n][m]);
double *findPerfectSquares(double *initArr, int arrSize, int *newSize);
float plus(float firstNum, float secondNum);
float minus(float firstNum, float secondNum);
float mult(float firstNum, float secondNum);
float division(float firstNum, float secondNum);


int main(void) {
    double initArr[5] = {1, 9, 2, 4, 25};
    int size = 0;

    void (*mainScan1DArr)(int, int[]) = scan1DArr;
    void (*mainOut1DArr)(int, int[]) = out1DArr;
    void (*mainEvenToZero)(int, int[]) = evenToZero;
    void (*mainScan2DArr)(int, int, int[]) = scan2DArr;
    int (*mainCountZero2DArr)(int, int, int[]) = countZero2DArr;
    double* (*mainFindPerfectSquares)(int, int, int[]) = findPerfectSquares;
    float (*calc[4])(float, float) = {plus, minus, mult, division};

    double *outArr = mainFindPerfectSquares(initArr, 5, &size);

    float ans;
    int operNum;
    float a, b;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operation number: ");
    scanf("%d", &operNum);

    switch (operNum) {
    case 1:
        ans = calc[0](a, b);
        break;
    
    case 2:
        ans = calc[1](a, b);
        break;
    
    case 3:
        ans = calc[2](a, b);
        break;
    
    case 4:
        ans = calc[3](a, b);
        break;
    
    default:
        break;
    }

    printf("Result: %f\n", ans);

    if (outArr != NULL) {
        for (int i = 0; i < size; i++)
            printf("%i: %lf\n", i, outArr[i]);

        free(outArr);
    }

    // одномерный массив
    printf("одномерный массив\n");
    int n;
    scanf("%i", &n);

    int mas[n];

    mainScan1DArr(n, mas);
    mainEvenToZero(n, mas);
    printf("Конечный массив: \n");
    mainOut1DArr(n, mas);

    // двумерный массив
    printf("двумерный массив\n");
    int size1, size2;
    int count;

    scanf("%i\n", &size1);
    scanf("%i", &size2);

    int arr[size1][size2];

    mainScan2DArr(size1, size2, arr);
    count = mainCountZero2DArr(size1, size2, arr);
    printf("%i", count);
}

//одномерный массив
void scan1DArr(int size, int arr[size]){
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
}

// вывод массива
void out1DArr(int size, int arr[size]) {
    for (int i = 0; i < size; i++)
        printf("%d\n", arr[i]);
}

// четные числа к нулю
void evenToZero(int size, int arr[size]) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            arr[i] = 0;
    }
}

// двумерный массив
void scan2DArr(int n, int m, int arr[n][m]) {
    for (int i = 0; i < n; i++) 
        scan1DArr(m, arr);
}

// нули каждую 3 строку
int countZero2DArr(int n, int m, int arr[n][m]) {
    int counter = 0;
    
    for (int i = 2; i < n; i += 3) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0)
                counter++;
        }
    }
    
    return counter;
}

// передача указателей
double *findPerfectSquares(double *initArr, int arrSize, int *newSize) {
    double *outArr = NULL;
    *newSize = 0;

    for (int i = 0; i < arrSize; i++) {
        if (sqrt(initArr[i]) == (int)sqrt(initArr[i])) {
            (*newSize)++;
            outArr = (double *)realloc(outArr, (*newSize) * sizeof(double));
            outArr[*newSize - 1] = initArr[i];
        }
    }

    return outArr;
}

float plus(float firstNum, float secondNum) {
    return firstNum + secondNum;
}

float minus(float firstNum, float secondNum) {
    return firstNum - secondNum;
}

float mult(float firstNum, float secondNum) {
    return firstNum * secondNum;
}

float division(float firstNum, float secondNum) {
    return firstNum / secondNum;
}