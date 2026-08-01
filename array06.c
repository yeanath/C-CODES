#include <stdio.h>

#define n 7

void showItems(int ar[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%d\n", ar[i]);
    }
    return;
}

int main(void)
{
    int list[n] = {7, 2, 11, 23, 27, 5, 47};
    int p = 3;

    for (int i = p + 1; i < n; i++)
    {
        list[i - 1] = list[i];
    }
    list[n - 1] = -1;

    showItems(list, n);

    return 0;
}