/*
 * Написать только одну функцию, которая сортирует массив по возрастанию.
 * первый аргумент - размер массива
 * второй аргумент - адрес нулевого элемента
 */

// #include <stdio.h>

void sort_array(int size, int a[])
{
    int i, num = 1;
    while (num)
    {
        num = 0;
        for(i = 0; i < size-1; i++)
        {
            if(a[i] > a[i+1])
            {
                num = a[i];
                a[i] = a[i+1];
                a[i+1] = num;
                num++;
            }
        }
    }
    
}


// int main (int argc, char **argv)
// {
//     int arr[] = {20, 19, 4, 3, 2, 1, 18, 17, 13, 12, 11, 16, 15, 14, 10, 9, 8, 7, 6, 5};
//     int size_arr = 20;

//     sort_array(size_arr, arr);

//     for(int i = 0; i < size_arr; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }
