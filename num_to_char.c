#include <stdio.h>

int main()
{
    int num, x, rem, sum = 0;

    printf("Enter a positive number : ");
    scanf("%d", &num);

    x = num; // keep num safe, do the reversing on x

    while (x != 0)
    {
        rem = x % 10;
        sum = sum * 10 + rem; // build the reversed number digit by digit
        x = x / 10;
    }

    printf("The number is: ");

    if (num == 0)
    {
        printf("Zero");
    }
    else
    {
        while (sum != 0)
        {
            rem = sum % 10; // now extracting digits gives leftmost-first order

            switch (rem)
            {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            }

            sum = sum / 10;
        }
    }

    printf("\n");
    return 0;
}