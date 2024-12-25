/*
 * Считать массив из 10 элементов и отобрать в другой массив все числа,
 * у которых вторая с конца цифра (число десятков) – ноль.
 */

#include <stdio.h>

void print_arr(int arr[], int len)
{
	for(int i = 0; i < len; i++)
    {
		if(arr[i])
		{
			 printf("%d ", arr[i]);
		}
    }
    printf("\n");
}

int main (int argc, char **argv)
{
	int num = 5;
	int arr[num];
    int len = 0;
    int x;
    printf("Enter %d number: \n", num);

    // считывание и запись чисел в массив
    for(int i = 0; i < num; i++)
    {
        arr[i] = scanf("%d", &x);
    }
    
    // Подсчет подходящих чисел
    for(int i = 0; i < num; i++)
	{
		if(arr[i]%100 >= 10 || arr[i] < 100)
		{
			len++;;
		}
    }

    int arr_out[len];   //Созлание массива для вывода
    len = 0;
    //Заполнение массива
    for(int i = 0; i < num; i++)
	{
		if(arr[i]%100 >= 10 || arr[i] < 100)
		{
			arr_out[len] = arr[i];
            len++;
		}
    }

    print_arr(arr_out, num);
    
    return 0;
}
