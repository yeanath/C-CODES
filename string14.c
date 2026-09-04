// removing duplicate latters

#include <stdio.h>

int main()
{
    char name[] = "Yeanath Hossain";
    int i, k, j;

    for (i = 0; name[i] != '\0'; i++)
    {
        int duplicate = 0;
        for (k = 0; k < i; k++) // check all earlier characters
        {
            if (name[k] == name[i])
            {
                duplicate = 1;
                break;
            }
        }

        if (duplicate)
        {
            for (j = i; name[j] != '\0'; j++)
                name[j] = name[j + 1];
            i--; // recheck this index — the shifted-in char needs testing too
        }
    }

    puts(name);
    return 0;
}