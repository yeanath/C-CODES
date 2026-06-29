// Q: -1+3+15+35
#include <stdio.h>
#include <math.h>
int main()
{

    int sum = 0;
    for (int i = 1; i <= 4; i = i + 1)
    {
        sum = sum + ((2 * i - 1) * (2 * i - 3));
    }
    printf("The sum is %d", sum);
    return 0;
}