// Ascending order
// Compare each pair of neighbors; if the left one is bigger, swap them. Do this repeatedly. 
// Each full pass pushes the largest remaining number to its correct spot at the end, like a bubble rising.

#include <stdio.h>

#define n 5

void showItems(int list[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d  ", list[i]);
    }
    printf("\n");
    return;
}

int main(void)
{
    int a[n] = {5, 2, 8, 1, 3};

    showItems(a, n);

    int t;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    showItems(a, n);

    return 0;
}