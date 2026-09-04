#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    int count = 0;
    printf("Enter your name : ");
    fgets(name, sizeof(name), stdin);
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            count++;
        }
    }
    puts(name);
    printf("Vowel count : %d", count);
    return 0;
}