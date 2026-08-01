#include <stdio.h>

#define row 3
#define col 4

int main(void)
{
    int a[row][col] = {{1, 2, 3, 4},    // row 0
                       {4, 5, 6, 7},    // row 1
                       {7, 8, 9, 1}};   // row 2
    int b[row][col] = {{2, 3, 4, 5},
                       {6, 7, 8, 9},
                       {1, 3, 5, 7}};
    int c[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}