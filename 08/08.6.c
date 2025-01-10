/*
 * Определить количество положительных элементов квадратной матрицы,
 * превышающих по величине среднее арифметическое всех элементов главной
 * диагонали. Реализовать функцию среднее арифметическое главной диагонали.
 */

#include <stdio.h>

int middle_diagonal_arr(int size, int a[][size])
{
    int mid_sum = 0;
    for (int i = 0; i < size; i++)
    {
        mid_sum += a[i][i];
    }
    
    return mid_sum/size;
}

int main (int argc, char **argv)
{
    int size_quare = 5;
    int arr[5][5] = {{1,1,1,1,1}, {2,2,2,2,2}, {3,3,3,3,3}, {4,4,4,4,4}, {5,5,5,5,5}};
    int num;
    int sum = 0;
    num = middle_diagonal_arr(size_quare, arr);
    for (int i = 0; i < size_quare; i++)
    {
        for (int j = 0; j < size_quare; j++)
        {
            if (arr[i][j] > num && arr[i][j] >= 0)
            {
                sum ++;
            }
        }
    }
    
    printf("%d", sum);
    
    return 0;
}
