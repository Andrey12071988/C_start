/*
 * Дано натуральное число N. Выведите все его цифры по одной, в прямом
 * порядке, разделяя их пробелами или новыми строками. Необходимо
 * реализовать рекурсивную функцию.
*/
#include <stdio.h>

void print_num(int num)
{ 
    if(num > 0)
        print_num(num - 1);
    printf("%d   ", num);
}

int main (int argc, char **argv)
{
    printf("Enter the number: ");
    int num;
    scanf("%d", &num);
    
    print_num(num);

    return 0;
}