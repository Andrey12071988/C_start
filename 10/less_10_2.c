// Задача 2. Удалить пробелы из текста
// В файле .txt необходимо удалить все лишние пробелы, 
// в начале предложения и сдвоенные пробелы. 
// Для решения задачи разработать функцию. 
// Результат записать в .txt. 



#include <stdio.h>

int main(void)
{
    char str_in[1024];                  // Массив под строку
    char file_in[] = "file_in.txt";     // Имя файла для считывания
    char file_out[] = "file_out.txt";   // Имя файла для записи
    FILE *f_in = fopen(file_in, "r");
    FILE *f_out = fopen(file_out, "w");
    int c, status = 0;
    // status 0 - Положение курсора в начале файла, до первого символа
    // status 1 - Положение курсора после считанного символа
    // status 2 - Положение курсора после пробела

    while ((c = fgetc(f_in)) != EOF)
    {
        switch (status)
        {
            case 0:                 
                if (c != ' ')
                {
                    status = 1;
                    fputc(c, f_out);
                }
                break;
            
            case 1:
                if (c == ' ')
                    status = 2;
                else
                    fputc(c, f_out);
                break;

            case 2:
                if (c != ' ')
                {
                    status = 1;
                    fputc(' ', f_out);
                    fputc(c, f_out);
                }
        }
    }

    fclose(f_in);
    fclose(f_out);

    return 0;
}