#include <stdio.h>

float inverse(int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        float total = (1.0 / i) * (inverse(i - 1));
        return total;
    }
    return 0;
}

int main()
{
    int x;
    printf("Enter the upperlimit : ");
    scanf("%d", &x);
    printf("%f", inverse(x));
    return 0;
}