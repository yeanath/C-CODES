#include <stdio.h>

#define n 5

int main(void)
{
    int list[n] = {22, 56, 22, 89, 41};
    int k;

    scanf("%d", &k);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (list[i] == k)
            count++;
    }

    if (count == 0)
    {
        printf("%d is not in the list.\n", k);
    }
    else
    {
        printf("%d is in the list and frequency = %d.\n", k, count);
    }

    return 0;
}