// search key

#include <stdio.h>
#include <string.h>
int main()
{
    char name[] = "Yeanath";
    char n;
    printf("Enter the desired character : ");
    scanf("%c", &n);
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == n)
        {
            count++;
        }
    }
    printf("count = %d", count);
    return 0;
}
