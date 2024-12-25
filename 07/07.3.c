/*
 * Считать массив из 12 элементов и выполнить 
 * циклический сдвиг ВПРАВО на 4 элемента
 */
#include <stdio.h>

void print_arr(int arr[])
{
	for(int i = 0; i < 12; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void step_arr(int arr[])
{

}

int main (int argc, char **argv)
{
	int num[12];
    int x;
    printf("Enter 12 number: \n");
    
    // Смещение при записи в массив
    for(int i = 0; i < 12; i++)
    {
		x = (i + 4) % 12;
        scanf("%d", &num[x]);
    }

    print_arr(num);
    
    return 0;
}
