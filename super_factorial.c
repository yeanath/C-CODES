#include <stdio.h>
int main()
{
    double n;
    double fact = 1;
    double sfact = 1;
    printf("Enter the value : ");
    scanf("%lf", &n);
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        sfact = sfact * fact;
    }
    printf("The factorial of %0.0lf is %0.0lf", n, fact);
    printf("The super factorial of %0.0lf is %0.0lf", n, sfact);

    return 0;
}