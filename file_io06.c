#include <stdio.h>

int main(void)
{
    char mat[100];

    FILE *fin = fopen("output1.txt", "r");
    if (fin == NULL)
    {
        printf("Error opening input file\n");
        return 1;
    }

    FILE *fout = fopen("output2.txt", "w");
    if (fout == NULL)
    {
        printf("Error opening output file\n");
        fclose(fin);
        return 1;
    }

    while (fgets(mat, sizeof(mat), fin) != NULL)
    {
        printf("%s", mat); // show it on screen
        fputs(mat, fout);  // also write it to output2.txt
    }

    fclose(fin);
    fclose(fout);
    return 0;
}