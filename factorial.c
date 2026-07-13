#include <stdio.h>
int main()
{
    double n;
    double fact = 1;
    printf("Enter the value : ");
    scanf("%lf", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %0.0lf is %0.0lf", n, fact);
    return 0;
}