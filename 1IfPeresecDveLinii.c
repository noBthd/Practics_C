// 1 практическая 
#include <stdio.h>

int main() {
    double x1, x2, x3, x4, y1, y2, y3, y4;

    printf("Введите кординаты 1 отрезка(x1, y1, x2, y2)\n");
    scanf("%lf, %lf, %lf, %lf", &x1, &y1, &x2, &y2);

    //printf("%lf, %lf, %lf, %lf", x1, y1, x2, y2); //test

    printf("\nВведите кординаты 2 отрезка(x3, y3, x4, y4)\n");
    scanf("%lf, %lf, %lf, %lf", &x3, &y3, &x4, &y4);

    //printf("Num2: %lf, %lf, %lf, %lf", x3, y3, x4, y4); //test

    double Incline1 = (y2 - y1) / (x2 - x1); //формула прямой 1 
    double Incline2 = (y4 - y3) / (x4 - x3); //формула прямой 2

    if (Incline1 == Incline2)
        printf("Отрезки Параллельны.");
    else {
        double Cord_X = ((x1 * y2 - y1 * x2) * (x3 - x4) - (x1 - x2) * (x3 * y4 - y3 * x4)) / ((x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)); //формула для нахожденя пересечения в точке x
        double Cord_Y = ((x1 * y2 - y1 * x2) * (y3 - y4) - (y1 - y2) * (x3 * y4 - y3 * x4)) / ((x1 - x2) * (y3 - y4) - (y1 - y2) * (x3 - x4)); //формула для нахожденя пересечения в точке y

        printf("\nЛинии пересекаютя в точке: %lf, %lf\n", Cord_X, Cord_Y);
    }

    return 0;
}