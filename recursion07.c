#include <stdio.h>

int fact(int i)
{
    if (i <= 1)
    {
        return 1;
    }
    else
    {
        return i * fact(i - 1);
    }
    return 0;
}

double sum(int j)
{
    if (j == 1)
    {
        return 1;
    }
    else
    {
        double total = (j / fact(j)) + (sum(j - 1));
        return total;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter the limit : ");
    scanf("%d", &n);
    printf("%f", sum(n));
    return 0;
}