#include <stdio.h>

#define n 7

int main(void)
{
    int list[n] = {22, 56, 22, 89, 41, 56, 15};

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (list[i] == list[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            printf("%d\n", list[i]);
        }
    }

    return 0;
}