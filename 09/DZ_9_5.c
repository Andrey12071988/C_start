// В файле .txt дана строка слов, разделенных пробелами.
// Найти самое длинное слово и вывести его в файл .txt. 
// Случай, когда самых длинных слов может быть несколько, не обрабатывать

// Данные на входе:  Hello beautiful world
// Данные на выходе: beautiful

#include <stdio.h>
#include <string.h>

const int line_width = 1024;

int main(void)
{
    char file_in[]  = "file_in.txt";
    char file_out[]  = "file_out.txt";
    char line[line_width];              // массив для считываемого слова
    char result[line_width];            // массив для самого длинного слова
    int len, max_len = 0;

    FILE *fp;
    fp = fopen(file_in, "r");

    while (fscanf(fp, "%s", line) == 1) // Чситывание файла по словам
    {
        len = strlen(line);             // Определение длинны слова
        if (len > max_len)
        {
            max_len = len;
            strcpy(result, line);       // Копирование символов строки массива line в массив result
        }
    }
    fclose(fp);

    // Запись самого длинного слова в файл
    fp = fopen(file_out, "w");
    fprintf(fp, "%s", result);
    fclose(fp);

    return 0;
}