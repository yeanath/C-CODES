#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

        for (int i = n - 1; i >= 1; i--)
    {
        int indent = n - i;
        int stars = 2 * i - 1;

        for (int s = 1; s <= n - i; s++)
        {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}