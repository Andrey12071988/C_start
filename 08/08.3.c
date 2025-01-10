/*
 * функция, которая находит максимальный элемент в массиве
 * первый аргумент - размер массива
 * второй аргумент - адрес нулевого элемента
 */

// #include <stdio.h>

int find_max_array(int size, int a[])
{
    int i = 1, num, max = a[0];
    while (i < size)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        i++;
    }
    return max;
}


// int main (int argc, char **argv)
// {
//     int arr[] = {773, 307, 371, 548, 531, 765, 402, 27, 573, 591, 217, 859};
//     int size_arr = 12;
//     int number;

//     number = find_max_array(size_arr, arr);

//     printf("%d ", number);

    
//     return 0;
// }
