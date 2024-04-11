// 8 практическая
#include <stdio.h>


// ввод массива
void input(int n, int arr[n]) {
    if (n == 0)
        return;
    
    scanf("%i", arr);

    input(n - 1, arr + 1);
}

// приведение четных числе массива к нулю
void evenToZero(int n, int arr[n]) {
    if (n == 0)
        return;
    
    if (arr[0] % 2 == 0)
        arr[0] = 0;

    evenToZero(n - 1, arr + 1);
}

// вывод массива
void output(int n, int arr[n]) {
    if (n == 0)
        return;
    
    printf("\n%i ", *arr);

    output(n - 1, arr + 1);
}

int main(){
    int n;
    scanf("%i", &n);

    int arr[n];

    input(n, arr);
    evenToZero(n, arr);
    output(n, arr);
}
