#include <stdio.h>

int main()
{
    char name[100];

    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    int len = 0;
    while (name[len] != '\0')
    {
        len++;
    }
    if (len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
        len--;
    }
    int i = 0;
    int j = len - 1;
    int temp;
    while (i < j)
    {
        temp = name[i];
        name[i] = name[j];
        name[j] = temp;
        i++;
        j--;
    }

    puts(name);
    return 0;
}