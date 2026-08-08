#include <stdio.h>

int main(void)
{

    double arr[5] = {3, 5, 2, 8, 7};

    // Selection sort
    for (int i = 0; i < 5; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            double temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");

    return 0;
}