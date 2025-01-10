/*
 * функция, которая определяет, верно ли, что
 * среди элементов массива есть два одинаковых
 * Если ответ «да», функция возвращает 1; если ответ «нет», то 0.
 * первый аргумент - размер массива
 * второй аргумент - адрес нулевого элемента
 */

// #include <stdio.h>

int is_two_same(int size, int a[])
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(a[i] == a[j])
            {
                return 1;
            }
        }
    }
    return 0;
}


// int main (int argc, char **argv)
// {
//     int arr[] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 20, 2, 1};
//     int size_arr = 20;

//     if (is_two_same(size_arr, arr))
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }

//     return 0;
// }
