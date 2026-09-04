#include <stdio.h>
#include <math.h>
int sumsqr(int i)
{
    if (i == 1)
    {
        return 1;
    }
    else
    {
        int total = pow(i, 2) + sumsqr(i - 1);
        return total;
    }
    return 0;
}

int main()
{
    int x;
    printf("Enter the upperlimit : ");
    scanf("%d", &x);
    printf("%d", sumsqr(x));
    return 0;
}