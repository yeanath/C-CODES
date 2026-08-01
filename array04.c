#include <stdio.h>

#define n 7

int main(void)
{
    int list[n] = {22, 56, 22, 89, 41, 56, 15};

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int m = 0; m < i; m++)
        {
            if (list[i] == list[m])
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("%d\n", list[i]);
        }
    }

    return 0;
}