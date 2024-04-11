// 5 практика
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


int main(void) {
    double initArr[5] = {1, 9, 2, 4, 25};
    double* outArr;
    int size = 0;

    outArr = (double*) malloc(0);

    if (outArr != NULL) {
        for (int i = 0; i < 5; i++) {
            if(sqrt(initArr[i]) == (int)sqrt(initArr[i])) {
                size++;
                outArr = (double*) realloc(outArr, size * sizeof(double));
                outArr[size - 1] = initArr[i];
            }
        }

        //output
        for(int i = 0; i < size; i++) 
            printf("%i: %lf\n", i, outArr[i]);

        free(outArr);
    }
}
