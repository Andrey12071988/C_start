/*
 * Составить рекурсивную функцию. Выведите все числа от A до B
 * включительно, в порядке возрастания, если A < B, или в порядке убывания в
 * противном случае.
*/
#include <stdio.h>

void print_num_up(int num1, int num2)
{ 
    if(num1 > num2)
        print_num_up(num1 - 1, num2);
    printf("%d   ", num1);
}

void print_num_down(int num1, int num2)
{
    printf("%d   ", num1);
    if(num1 > num2)
        print_num_down(num1 - 1, num2);
}

int main (int argc, char **argv)
{
    printf("Enter the number: ");
    int num_1;
    int num_2;
    scanf("%d%d", &num_1, &num_2);

    if(num_1 < num_2)
        print_num_up(num_2, num_1);
    else
        print_num_down(num_1, num_2);

    return 0;
}