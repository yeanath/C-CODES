// Descending order

#include <stdio.h>

#define n 6

void showItems(int a[], int sz)
{
    for (int i = 0; i < sz; i++)
        printf("%d ", a[i]);
    printf("\n");
}

int main(void)
{
    int ar[n] = {6, 3, 1, 9, 7, 2};

    showItems(ar, n);

    int m, t;
    for (int i = 0; i < n; i++)
    {
        m = i;
        for (int j = i + 1; j < n; j++)
        {
            if (ar[j] > ar[m])
                m = j;
        }

        if (m != i)
        {
            t = ar[i];
            ar[i] = ar[m];
            ar[m] = t;
        }
    }

    showItems(ar, n);

    return 0;
}

