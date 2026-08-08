#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    int mat[n][n];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + mat[i][i];
    }
    printf("The sum of major diagonal is %d", sum);
    return 0;
}