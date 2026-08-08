#include <stdio.h>

int main()
{
    int a[6] = {2, 4, 2, 6, 6, 8};

    for (int i = 0; i < 6; i++)
    {
        int count = 0;
        for (int j = 0; j < i; j++) // only check elements BEFORE i
        {
            if (a[i] == a[j])
            {
                count = 1;
                break; // no need to keep checking
            }
        }
        if (count == 0)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}