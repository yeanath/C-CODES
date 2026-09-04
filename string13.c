// Alphabet counter

#include <stdio.h>

int main()
{
    char name[] = "Md. Yeanath Hossain";

    for (int i = 0; name[i] != 0; i++)
    {
        int already_seen = 0;
        for (int k = 0; k < i; k++)
        {
            if (name[k] == name[i])
            {
                already_seen = 1;
                break;
            }
        }
        if (already_seen)
            continue;
        int count = 1;
        for (int j = 0; name[j] != 0; j++)
        {
            if (i != j && name[i] == name[j])
            {
                count++;
            }
        }
        printf("%c: %d \n", name[i], count);
    }
    return 0;
}