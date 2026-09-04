#include <stdio.h>

int main()
{
    char name[] = "Yeanath";
    int len = 0;
    for (int i = 0; name[i] != 0; i++)
    {
        len++;
    }
    int i = 0;
    int j = len-1;
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