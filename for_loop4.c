// Q: 1^2+3^2+7^2+15^2
#include <stdio.h>
#include <math.h>
int main()
{

    int sum = 0;
    for (int i = 0; i <= 15; i = ((2 * i) + 1))
    {
        sum = sum + (i * i);
    }
    printf("The ans is %d", sum);
    return 0;
}
