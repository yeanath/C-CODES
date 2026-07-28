#include <stdio.h>

int main()
{
    int r;
    printf("Enter the row : ");
    scanf("%d", &r);
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= r - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= r; k++)
        {
            if (i == 1 || i == r || k == 1 || k == r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}