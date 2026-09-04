// case conversion

#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "YeAnath262";
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 65 && name[i] <= 90)
        {
            name[i] = name[i] + 32;
        }
    }
    //gets(name);
    for(int i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}