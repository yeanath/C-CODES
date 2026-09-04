#include <stdio.h>

int main()
{
    FILE *fin, *fout;
    int ch;
    fin = fopen("output1.txt", "r");
    if (fin == NULL)
    {
        printf("Error");
    }
    else
    {
        while ((ch = getc(fin)) != EOF)
        {
            printf("%c", ch);
        }
    }

    int c;
    fout = fopen("output2.txt", "w");
    if (fout == NULL)
    {
        printf("Error");
    }
    else
    {
        fin = fopen("output1.txt", "r");
        while ((c = fgetc(fin)) != EOF)
        {
            if (c >= 'A' && c <= 'Z')
            {
                fputc(c, fout);
            }
        }
    }
    fclose(fin);
    fclose(fout);
    return 0;
}