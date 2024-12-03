/*
 * Составить логическую функцию, которая определяет, верно ли,
 * что в заданном числе сумма цифр равна произведению
*/

#include <stdio.h>

int is_happy_number(int n)
{
    int summ = 0;
    int mult = 1;
    int result;
    do
    {
        summ += n % 10; 
        mult *= n % 10;
        n /= 10;
    }
    while (n);
    
    result = (summ == mult) ? 1 : 0;
    return result;
}

void main (int argc, char **argv)
{
    int num;
    scanf("%d", &num);

    if (is_happy_number(num))
        printf("YES");
    else
        printf("NO");
}