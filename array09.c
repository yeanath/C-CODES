#include <stdio.h>

void splitEvenOdd(int a1[], int size, int a2[], int *j, int a3[], int *k)
{
    for (int i = 0; i < size; i++)
    {
        if (a1[i] % 2 == 0)
        {
            a2[*j] = a1[i];
            (*j)++;
        }
        else
        {
            a3[*k] = a1[i];
            (*k)++;
        }
    }
}

void printArray(int arr[], int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%2d", arr[i]);
    }
    printf("\n");
}

int main()
{
    int a1[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int a2[10], a3[10];
    int j = 0, k = 0;

    splitEvenOdd(a1, 20, a2, &j, a3, &k);

    printf("Even elements: ");
    printArray(a2, j);

    printf("Odd elements: ");
    printArray(a3, k);

    return 0;
}