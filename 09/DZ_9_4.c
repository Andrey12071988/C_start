// В файле .txt строка из маленьких и больших английских букв, знаков препинания и пробелов.
// Требуется удалить из нее повторяющиеся символы и все пробелы. Результат записать в файл .txt.

// abc cde def
// abcdef


#include <stdio.h>

int main(void)
{
    char file_in[]  = "file_in.txt";
    char file_out[]  = "file_out.txt";
    FILE *f_in = fopen(file_in, "r");
    FILE *f_out = fopen(file_out, "w");

    char str[1002], c;
    int i = -1, j;

    fgets(str, 1000, f_in);

    // Замена пробелами всех последующих повторяющихся символов в строке
    while (str[++i] != '\0')
    {
        c = str[i];
        j = i;
        while (str[++j] != '\0')
            if (str[j] == c)
                str[j] = ' ';        
    }
    i = -1;

    // Проход по масссиву символов и если символ не пробел, то запись его в файл
    while (str[++i] != '\0')
        if (str[i] != ' ')
            fprintf(f_out, "%c", str[i]);

    fclose(f_in);
    fclose(f_out);

    return 0;
}