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

    int count = 1;
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (i == j && mat[i][j] != 1)
            {
                count = 0;
            }
            else if (i != j && mat[i][j] != 0)
            {
                count = 0;
            }
        }
    }
    if (count == 1)
    {
        printf("Identity matrix\n");
    }
    else
    {
        printf("Not identity matrix\n");
    }
    return 0;
}