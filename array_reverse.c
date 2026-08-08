#include <stdio.h>
#define n 5

void show_item(int list[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%4d", list[i]);
    }
    printf("\n");
}

void reverse(int list[], int sz)
{
    int temp;
    for (int i = 0; i < (sz / 2); i++)
    {
        for (int j = sz - i - 1; j >= sz - i - 1; j--)
        {
            temp = list[i];
            list[i] = list[j];
            list[j] = temp;
        }
    }
}

int main()
{
    int list[n] = {2, 4, 6, 8, 10};
    show_item(list, n);
    reverse(list, n);
    show_item(list, n);
    return 0;
}