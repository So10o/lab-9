#define ROW1 10
#define COL1 10
#define ROW 10
#define COL 10
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(0, "RUS");
    puts("Задание 1.2 \n");
    int row1, col1;
    printf("\n");
    for (row1 = 1; row1 <= ROW1; ++row1)
    {
        for (col1 = 1; col1 <= COL1; col1++)
            if (row1 >= col1)
                printf("%5d", col1 * row1);
        printf("\n");
    }
    puts("Задание 1.3 \n");
    int row, col;
    int temp = 0;
    printf("\n");
    for (row = 1; row <= ROW - 6; row++)
    {
        for (col = 1; col <= COL; col++)
            printf("%5d", temp = temp + 1);
        if (temp == 10)
        {
            temp = 0;
        }
        printf("\n");
    }
    puts("Задание 2");
    int x, y, z;
    int count = 0;
    printf("Введите число\n");
    scanf("%d", &x);
    y = x % 10;
    while (x > 0)
    {
        z = x % 10;
        if (z == y)
        {
            count++;
        }
        x /= 10;
    }
    printf("Последняя цифра в числе %d\n", y);
    printf("Количества повторений последней цифры в числе %d", count);
    return 0;
}