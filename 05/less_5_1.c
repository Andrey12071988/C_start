/*
 * Необходимо составить функцию, которая определяет, сколько зерен попросил
 * положить на N-ую клетку изобретатель шахмат
*/
#include <stdio.h>

int corn (int square)
{ 
    square -= 1;
    int result = (1<<square);
    return result;
}

void main (int argc, char **argv)
{
    printf("Enter the cell number \n");
    int result;
    int num;
    scanf("%d", &num);
    
    result = corn(num);
    printf("number of grains = %d", result);

}