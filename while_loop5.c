// Q: 1+8+27+64
#include <stdio.h>
#include <math.h>
int main()
{

    int i = 1;
    int sum = 0;
    while (i <= 4)
    {
        sum = sum + pow(i, 3);
        i = i + 1;
    }
    printf("The sum is %d", sum);
    return 0;
}
