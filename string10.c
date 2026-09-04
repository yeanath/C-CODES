// count words in sentence

#include <stdio.h>

int main()
{
    char name[] = "My name is Yeanath Hossain";
    int count = 0;
    int inWord = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            count++;
        }
    }
    printf("%d", count);
    return 0;
}