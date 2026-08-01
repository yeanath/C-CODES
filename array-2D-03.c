// Multiplication of matrix

#include <stdio.h>

#define r1 2
#define c1 3
#define r2 3
#define c2 2

int main(void)
{
    int a[r1][c1] = {
        {1, 2, 3},      // row 0
        {4, 5, 6},      // row 1
    };

    int b[r2][c2] = {{1, 2},
                     {3, 4},
                     {5, 6}};

    int c[r1][c2];

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < r2; k++)
            {        // or, k < c1
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}