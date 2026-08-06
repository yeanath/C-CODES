#include <stdio.h>

void show_items(int list[], int sz)
{
    int temp;
    for (int i = 0; i < sz; i++)
    {

        printf("%d ", list[i]);
    }
    printf("\n");
}

void show_reverse(int list[], int sz)
{
    int temp;
    for (int i = 0; i < sz / 2; i++)
    {
        temp = list[i];
        list[i] = list[sz - i - 1];
        list[sz - i - 1] = temp;
    }
}

int main()
{
    int list[] = {1, 2, 3, 4, 5, 6, 7};
    show_items(list, 7);
    show_reverse(list, 7);
    show_items(list, 7);
    return 0;
}