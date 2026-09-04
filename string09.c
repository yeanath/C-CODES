// remove space

#include <stdio.h>

int main()
{
    char name[] = "Yeanath Hossain";
    int i, j;

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            for (j = i; name[j] != '\0'; j++)
                name[j] = name[j + 1]; // shift remainder + '\0' left
            // i--;                        // recheck this index (i++ in outer loop cancels it)
        }
    }
    puts(name);
    return 0;
}