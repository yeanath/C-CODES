// Q: 1+8+27+64
#include <stdio.h>
#include <math.h>
int main()
{

    int sum = 0;
    for (int i = 1; i <= 4; i = i + 1)
    {
        sum = sum + pow(i, 3);
    }
    printf("The sum is %d", sum);
    return 0;
}
