/*
 * Проверить строку состоящую из скобок "(" и ")" на корректность.
 * Размер строки не более 1000 символов
*/
#include <stdio.h>

void main (int argc, char **argv)
{
    char ch;
    int count = 0;
    int res = 0;
    printf("Enter the chars:\n");

    while (count <= 1000 && res >= 0 && ch != '\n')
    {
        ch = getchar();
        count++;
        if(ch == '(')
            res++;
        if(ch == ')')
            res--;
    }
    
    if (!res)
        printf("YES");
    else
        printf("NO");
}