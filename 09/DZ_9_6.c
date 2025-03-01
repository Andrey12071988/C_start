// В файле .txt дано предложение.
// Необходимо определить, сколько слов заканчиваются на букву 'а'.
// Ответ записать в файл .txt

#include <stdio.h>
#include <string.h>

const int line_width = 1024;

int main(void)
{
    char file_in[]  = "file_in.txt";
    char file_out[]  = "file_out.txt";
    char line[line_width];                  // массив для считываемого слова
    int count = 0;

    FILE *fp;
    fp = fopen(file_in, "r");

    while (fscanf(fp, "%s", line) == 1)     // Чситывание файла по словам
    {
        if (line[strlen(line) - 1] == 'a')  // Если последний символ слова 'a'
            count++;
    }
    fclose(fp);

    // Запись количества соответствующих слов
    fp = fopen(file_out, "w");
    fprintf(fp, "%d", count);
    fclose(fp);

    return 0;
}