#include <stdio.h>

#define row 3
#define col 4

int main(void)
{
    int list2D[row][col]; //={{1,2,3,4}, {4,5,6,7}, {7,8,9,1}};

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &list2D[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", list2D[i][j]);
        }
        printf("\n");
    }

    return 0;
}