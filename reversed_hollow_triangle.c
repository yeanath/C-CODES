#include <stdio.h>

int main()
{
    int n;
    printf("Enter row : ");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            if (i == n || k == 1 || i == k)

            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}