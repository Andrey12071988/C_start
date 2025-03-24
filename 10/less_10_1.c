// В файле .txt записаны символы. 
// Необходимо разработать функцию, которая меняет местами 
// пары соседних символов не обращая внимание на символы пробел. 
// Если количество символов нечетно (пробелы не считаем), 
// то последний символ не меняем. Результат записать в файл .txt.


#include <stdio.h>
#include <string.h>

void change_symbols(char *str_line)
{
    int size = strlen(str_line);        // Вычисление фактической длинны строки
    char symbol;
    int ch1;                            // Индекс символа
    int duo = 1;                        // Счетчик соседства символов
    int i = 0;                          // Индекс массива

    while (i < size)
    {
        if (str_line[i] != ' ')
        {
            if (duo)    // Запомнить индекс первого символа
            {
                ch1 = i;
                duo = 0;
            }
            else        // Поменять местами текущий и предыдущий символы
            {
                symbol = str_line[ch1];
                str_line[ch1] = str_line[i];
                str_line[i] = symbol;
                duo = 1;
            }
        }
        i++;
    }
    
}

int main(void)
{
    char str_in[1024];                  // Массив под строку
    char file_in[] = "file_in.txt";     // Имя файла для считывания
    char file_out[] = "file_out.txt";   // Имя файла для записи
    FILE *fp;
    fp = fopen(file_in, "r");           // Открытие файла в переменную
    fscanf(fp, "%[^\n]", str_in);       // Считывыание строки в массив
    fclose(fp);                         // Закрытие дискриптора файла

    change_symbols(str_in);             // Cмена соседних букв

    fp = fopen(file_out, "w");          // Открытие файла в переменную
    fprintf(fp, "%s", str_in);          // Запись строки (массив символов) в файл
    fclose(fp);                         // Закрытие дискриптора файла

    return 0;
}