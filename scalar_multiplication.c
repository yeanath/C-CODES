#include <stdio.h>
#define r 3
#define c 3

int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d", &n);
    int mat[r][c] = {{1, 2, 3},
                     {1, 2, 3},
                     {1, 2, 3}};
    int term;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            term = n * mat[i][j];
            printf("%d\t", term);
        }
        printf("\n");
    }

    return 0;
}