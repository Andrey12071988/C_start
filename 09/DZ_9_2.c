// В file.txt дана символьная строка до 1000 символов
// Необходимо заменить все буква А на В
// Как заглавные, так и строчные

#include <stdio.h>
#include <string.h>

const int line_width = 1024;

int main(void)
{
    int i = 0;
    char file_in[]  = "file_in.txt";            // Задание имени файла
    char file_out[]  = "file_out.txt";
    char c;
    char line[line_width];
    FILE *fp;
    
    fp = fopen(file_in, "r");
    fscanf(fp, "%[^\n]", line);
    fclose(fp);

    while ((c = line[i]) != '\0')
    {
        if (c == 'a' || c == 'A')
            line[i] += 1;           //Замена А на В

        if (c == 'b' || c == 'B')
            line[i] -= 1;           //Замена В на А

        i++;
    }

    fp = fopen(file_out, "w");
    fprintf(fp, "%s", line);
    fclose(fp);

    return 0;

}
