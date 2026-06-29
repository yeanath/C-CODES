// Q: 1/2-1/4+1/8-1/16+1/32-1/64
#include <stdio.h>
#include <math.h>
int main()
{

    float sum = 0;
    int sign = 1;
    for (int i = 1; i <= 6; i = i + 1)
    {
        sum = sum + sign * (1.0 / pow(2, i));

        sign = -sign;
    }
    printf("The sum is %f", sum);
    return 0;
}
