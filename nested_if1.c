// Leapyear
#include <stdio.h>
int main()
{

    int y;
    printf("Enter y: ");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                printf("%d is leapyear", y);
            }
            else
                printf("%d is not leapyear", y);
        }
        else
            printf("%d is leapyear", y);
    }
    else
        printf("%d is not leapyear", y);
    return 0;
}