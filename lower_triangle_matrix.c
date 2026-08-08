#include <stdio.h>
#define r 3
#define c 3
int main()
{

    int mat[r][c] = {{1, 2, 3},
                     {1, 2, 3},
                     {1, 2, 3}};
    int count = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i < j && mat[i][j] != 0)
            {
                count = 0;
            }
        }
    }
    if (count == 1)
    {
        printf("This is an lower triangle matrix\n");
    }
    if (count != 1)
    {
        printf("This is not an lower triangle matrix\n");
    }
    return 0;
}