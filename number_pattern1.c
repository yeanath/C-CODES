/*  1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5 */

#include <stdio.h>
int main(void)
{
    int n;
    printf("Enter range : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int sum = 0;
            sum = sum + j;
            printf("%d ", sum);
        }
        printf("\n");
    }
    return 0;
}
