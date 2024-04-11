#include <stdlib.h>
#include <stdio.h>
#include <math.h>

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

int main(void) {
    // указатели
    double initArr[5] = {1, 9, 2, 4, 25};
    int size = 0;

    double *outArr = findPerfectSquares(initArr, 5, &size);

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

    scan1DArr(n, mas);
    evenToZero(n, mas);
    printf("Конечный массив: \n");
    out1DArr(n, mas);

    // двумерный массив
    printf("двумерный массив\n");
    int size1, size2;
    int count;

    scanf("%i\n", &size1);
    scanf("%i", &size2);

    int arr[size1][size2];

    scan2DArr(size1, size2, arr);
    count = countZero2DArr(size1, size2, arr);
    printf("%i", count);
}
