/*
 * Считать массив из 10 элементов 
 * и отсортировать его по последней цифре.
 */

#include <stdio.h>

void print_arr(int arr[], int len)
{
	for(int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void in_arr(int arr[], int len)
{
	for(int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void sort_arr(int arr[], int len)
{
	int num;
	for(int i = 0; i < len-1; i++)
    {
        for(int j = i; j < len; j++)
        {
			if((arr[i]%10) > (arr[j]%10))
			{
				num = arr[j];
				arr[j] = arr[i];
				arr[i] = num;
			}
		}
    }
}


int main (int argc, char **argv)
{
	int num = 10;
	int arr[num];
    printf("Enter %d number: \n", num);
    
    in_arr(arr, num);
    sort_arr(arr, num);
    print_arr(arr, num);
    
    return 0;
}
