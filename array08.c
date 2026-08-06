// ascending and descending order

#include <stdio.h>
#define n 6

void show_items(int list[], int sz)
{
    for (int i = 0; i < sz; i++)
    {
        printf("%4d", list[i]);
    }
    printf("\n");
    return;
}
void ascending_order(int list[], int sz)
{
    int t;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (list[i] > list[j])
            {
                t = list[i];
                list[i] = list[j];
                list[j] = t;
            }
        }
    }
    return;
}

void descending_order(int list[], int sz)
{
    int t;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; j < sz; j++)
        {
            if (list[i] < list[j])
            {
                t = list[i];
                list[i] = list[j];
                list[j] = t;
            }
        }
    }
    return;
}

int main()
{
    int list[n] = {4, 6, 5, 8, 7, 2};
    show_items(list, n);
    ascending_order(list, n);
    show_items(list, n);
    descending_order(list, n);
    show_items(list, n);

    return 0;
}