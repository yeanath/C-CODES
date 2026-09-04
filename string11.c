// not printing vowels

#include <stdio.h>
#include <string.h>
int main()
{
    char name01[] = "How are you?";
    char name02[100];
    int i, j = 0;
    for (i = 0; name01[i] != 0; i++)
    {
        if (name01[i] != 'a' && name01[i] != 'e' && name01[i] != 'i' && name01[i] != 'o' && name01[i] != 'u')
        {
            name02[j] = name01[i];
            j++;
        }
    }
    name02[j] = '\0';
    puts(name02);
    return 0;
}