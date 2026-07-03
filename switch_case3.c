// Signal
#include <stdio.h>
#include <math.h>
int main()
{
    char signal;
    printf("Enter the signal (R/Y/G): ");
    scanf(" %c", &signal);
    switch (signal)
    {
    case 'R':
        printf("STOP");
        break;
    case 'Y':
        printf("SLOW DOWN");
        break;
    case 'G':
        printf("GO");
        break;
    default:
        printf("Invalid signal");
    }
    return 0;
}
