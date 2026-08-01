// Transpose matrix

#include <stdio.h>

#define r1 2
#define c1 3

int main(void)
{
    int a[r1][c1] = {
        {1, 2, 3},      // row 0
        {4, 5, 6},      // row 1
    };

    int b[c1][r1];

    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            b[i][j] = a[j][i];
        }
    }

    for (int i = 0; i < c1; i++)
    {
        for (int j = 0; j < r1; j++)
        {
            printf("%3d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}