/*
 * Дано натуральное число N. Посчитать количество «1» в двоичной записи
 * числа.
*/
#include <stdio.h>

int main (int argc, char **argv)
{
    printf("Enter the number: ");
    int num;
    int count = 0;
    scanf("%d", &num);

    while(num)
    {
        if (num%2)
            count++;
        num /= 2;
    }

    printf("%d", count);

    return 0;
}