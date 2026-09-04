#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    else
    {
        return n % 10 + sum(n / 10);
    }
    return 0;
}

int main()
{
    int num;
    printf("Enter the integer : ");
    scanf("%d", &num);
    printf("%d", sum(num));
    return 0;
}