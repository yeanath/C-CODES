// keep single characters

#include <stdio.h>

int main()
{
    char name[] = "md. yeanath hossain";

    for (int i = 0; name[i] != 0; i++)
    {
        int count = 0;
        for (int j = 0; name[j] != 0; j++)
        {
            if (i != j && name[i] == name[j])
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%c", name[i]);
        }
    }

    return 0;
}