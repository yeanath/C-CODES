#include <stdio.h>

int main()
{
    int arr[4][4];

    // Input
    printf("Enter 16 elements (4x4 matrix):\n");
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            scanf("%d", &arr[i][j]);

    // Assume first element is max initially
    int max = arr[0][0];
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("Global maximum = %d, found at row %d, column %d\n", max, maxRow, maxCol);

    return 0;
}