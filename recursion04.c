#include <stdio.h>

int sqr(int i, int j)
{
    if (j == 1)
    {
        return i;
    }
    else
    {
        int total = i * sqr(i, j - 1);
        return total;
    }
    return 0;
}

int main()
{
    int a, b;
    printf("Enter the value of a & b : ");
    scanf("%d %d", &a, &b);
    printf("%d", sqr(a, b));
    return 0;
}