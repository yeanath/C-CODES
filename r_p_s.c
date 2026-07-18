#include <stdio.h>

int main()
{
    char p1, p2;

    printf("Player 1, enter your choice (R/P/S): ");
    scanf("%c", &p1);
    printf("Player 2, enter your choice (R/P/S): ");
    scanf(" %c", &p2); 
    if (p1 == p2)
    {
        printf("It's a tie!\n");
    }
    else if ((p1 == 'R' && p2 == 'S') ||
             (p1 == 'P' && p2 == 'R') ||
             (p1 == 'S' && p2 == 'P'))
    {
        printf("Player 1 wins!\n");
    }
    else if ((p2 == 'R' && p1 == 'S') ||
             (p2 == 'P' && p1 == 'R') ||
             (p2 == 'S' && p1 == 'P'))
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Invalid input.\n");
    }

    return 0;
}