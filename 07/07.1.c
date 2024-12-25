/*
 * Ввести с клавиатуры массив из 5 элементов, найти среднее арифметическое
 * всех элементов массива.
 */

#include <stdio.h>

int main (int argc, char **argv)
{
    printf("Enter 5 number: ");
    float num[5];
    float sa = 0;
    for(int i = 0; i < 5; i++)
    {
        scanf("%.3f", num[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        sa += num[i];
    }
    printf("%.3f", sa/5);
    
    return 0;
}
