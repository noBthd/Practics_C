// 2 практическая
#include <stdio.h>


// одномерный массив + число
// void scanArr(int size, int arr[size]){
//     for (int i = 0; i < size; i++)
//         scanf("%d", &arr[i]);
// }

// void outArr(int size, int arr[size]) {
//     for (int i = 0; i < size; i++)
//         printf("%d\n", arr[i]);
// }

// void evenToZero(int size, int arr[size]) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] % 2 == 0)
//             arr[i] = 0;
//     }
// }

int main(void){
    int n;
    scanf("%i", &n);

    int mas[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &mas[i]);

    for(int i = 0; i < n; i++) {
        if (mas[i] % 2 == 0)
            mas[i] = 0;
    }

    for(int i = 0; i < n; i++)
        printf("%d\n", mas[i]);
}
