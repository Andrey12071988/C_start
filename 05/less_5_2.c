/*
 * Составить функцию, которая определяет наибольший общий делитель двух
 * натуральных и привести пример ее использования
*/

#include <stdio.h>

int nod (int a, int b)
{
    int nodNumber;
    int min;
    min = (a > b) ? a : b;

    for (int i = 1; i <= min; i++)
    {
        if (!(a%i) && !(b%i))
            nodNumber = i;
    }

    return nodNumber;
}

void main (int argc, char **argv)
{
    int num1;
    int num2;
    int result;
    scanf("%d%d", &num1, &num2);

    result = nod(num1, num2);
    printf("%d", result);
}