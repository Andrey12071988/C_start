// В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и иные символы.
// Требуется все числа, которые встречаются в строке, поместить в отдельный целочисленный массив.
//  Вывести массив по возрастанию в файл .txt.

// data 48 call 9 read13 blank0a
// 48 9 13 0

#include <stdio.h>
#include <string.h>

int pickNums(char *str, int nums[])
{
    int i = 0, j = 0, num = 0;
    while (str[i] != '\0')
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            while (str[i] >= '0' && str[i] <= '9')
            {
                num = num * 10 + (str[i] - 48);
                ++i;
            }
            nums[j++] = num;
            num = 0;
        }
        ++i;
    }
    return j;
}


void sortAscend(int a[], int size)
{
    int i, j;
    for (j = 1; i < size; ++j)
        for (i = 0; i < size - j; ++i)
        {
            if (a[i] > a[i+1])
            {
                a[i]    = a[i] ^ a[i+1];
                a[i+1]  = a[i] ^ a[i+1];
                a[i]    = a[i] ^ a[i+1];
            }
        }
        
    
}


int main(void)
{
    char file_in[]  = "file_in.txt";
    char file_out[]  = "file_out.txt";
    FILE *f_in = fopen(file_in, "r");
    FILE *f_out = fopen(file_out, "w");

    int i, size;
    int nums[500];
    int str[1002];
    fgets(str, 1000, f_in);     // Считать строку из файла f_in посимвольно в массив str

    size = pickNums(str, nums);
    sortAscend(nums, size);

    for (i = 0; i < size; ++i)
    {
        fprintf(f_out, "%d ", nums[i]);
    }

    fclose(f_in);
    fclose(f_out);

    return 0;
}