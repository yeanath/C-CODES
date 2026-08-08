#include <stdio.h>

int main()
{
    int a[5] = {3, 5, 2, 8, 7};
    int largest, secondlargest;
    if (a[0] > a[1])
    {
        largest = a[0];
        secondlargest = a[1];
    }
    else
    {
        largest = a[1];
        secondlargest = a[0];
    }
    for (int i = 2; i < 5; i++)
    {
        if (a[i] > largest)
        {
            secondlargest = largest;
            largest = a[i];
        }
        else if (a[i] < largest && a[i] != secondlargest)
        {
            secondlargest = a[i];
        }
    }
    printf("largest = %d and second largest = %d", largest, secondlargest);
    return 0;
}