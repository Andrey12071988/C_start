/*
 * Составить функцию, которая определяет сумму всех чисел от 1 до N
 * и привести пример ее использования.
*/
#include <stdio.h>

int summ (int n)
{
    int result = 0; 
    for (; n; n--)
    {
        result += n;
    }
    return result;
}

void main (int argc, char **argv)
{
    printf("Enter the number: ");
    int result;
    int num;
    scanf("%d", &num);
    
    result = summ(num);
    printf("%d", result);

}