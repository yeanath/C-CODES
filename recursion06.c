#include <stdio.h>
#include <math.h>

int print(int i, int j)
{
    if (j == 0)
    {
        return 1;
    }
    else
    {
        int sum = pow(i, j) + print(i, j - 1);
        return sum;
    }
    return 0;
}

int main()
{
    int r, n;
    printf("Enter the values : ");
    scanf("%d %d", &r, &n);
    printf("%d", print(r, n));
    return 0;
}