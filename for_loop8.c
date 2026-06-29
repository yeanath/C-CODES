// Q: even or odd with while loop
#include <stdio.h>
#include <math.h>
int main()
{

    int j;

    for (int i = 1; i <= 100000; i = i)
    {
        printf("Enter the number: ");
        scanf("%d", &i);
        if (i % 2 == 0)
        {
            printf("even\n", i);
        }
        else
        {
            printf("odd\n", i);
        }
    }
    return 0;
}
