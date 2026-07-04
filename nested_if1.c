//Leapyear
#include <stdio.h>
int main()
{
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    if (y % 4 == 0)
    {
        if (y % 100 == 0)
        {
            if (y % 400 == 0)
            {
                printf("It is leap year.");
            }
            else
            {
                printf("It is not leap year.");
            }
        }
        else
        {
            printf("It is a leap year.");
        }
    }
    else
    {
        printf("It is not a leap year");
    }
    return 0;
}