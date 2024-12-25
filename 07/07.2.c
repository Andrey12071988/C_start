/*
 * Ввести с клавиатуры массив из 5 элементов, 
 * найти минимальный из них.
 */

#include <stdio.h>

int main (int argc, char **argv)
{
    printf("Enter 5 number: ");
    int num[5];
    int min;
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
	
	min = num[0];
    for(int i = 1; i < 5; i++)
        min = (min > num[i]) ? num[i] : min;
        
    printf("%d", min);
    
    return 0;
}
