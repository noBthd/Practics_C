// 3 практика
#include <stdio.h>


// две переменные + двухмерный массив
// void inputArr(int n, int m, int Arr[n][m]) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++)
//             scanf("%i", &Arr[i][j]);
//     }
// }

int main(void) {
    int counter = 0;
    int n, m;

    scanf("%i\n", &n);
    scanf("%i", &m);

    int arr[n][m];

    // Input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            scanf("%i", &arr[i][j]);
    }

    // 0 counter
    for (int i = 2; i < n; i += 3) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0)
                counter++;
        }
    }

    printf("\n%d", counter);

    return 0;
}
