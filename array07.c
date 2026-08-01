#include <stdio.h>

void showItems(int a[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n");
    return;
}

void cumulativeFreq(int a[], int sz)
{
    for (int i = 1; i < sz; i++)
    {
        a[i] = a[i] + a[i - 1];
    }
    return;
}

void revList(int a[], int sz)
{
    int i = 0, j = sz - 1, t;
    while (i < j)
    {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
        i++;
        j--;
    }
    return;
}

int main(void)
{
    int ar[6] = {12, 34, 53, 78, 90, 47};

    showItems(ar, 6);

    revList(ar, 6);

    showItems(ar, 6);

    cumulativeFreq(ar, 6);

    showItems(ar, 6);

    return 0;
}

