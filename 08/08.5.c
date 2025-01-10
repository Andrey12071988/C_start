/*
 * функция, которая меняет в массиве минимальный и максимальный элемент местами
 * первый аргумент - размер массива
 * второй аргумент - адрес нулевого элемента
 */

// #include <stdio.h>

void change_max_min(int size, int a[])
{
    int min = 0, max = 0, num;
    for (int i = 1; i < size; i++)
    {
        if (a[min] > a[i])
        {
            min = i;
        }
        if (a[max] < a[i])
        {
            max = i;
        }
    }
    num = a[min];
    a[min] = a[max];
    a[max] = num;
}


// int main (int argc, char **argv)
// {
//     int arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
//     int size_arr = 20;

//     change_max_min(size_arr, arr);

//     for (int i = 0; i < size_arr; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }
