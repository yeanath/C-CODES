#include <stdio.h>

int main(void)
{
    int m, n;

    printf("Enter m (width) and n (height): ");
    scanf("%d %d", &m, &n);

    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
            printf(" ");

        for (int j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}