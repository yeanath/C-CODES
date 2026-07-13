#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int count = 0; // we are taking count to trace the division, count !=0 means prime
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
    {
        printf("%d is not a prime number", n);
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            count = 1;
        break;
    }
    if (count == 0)
    {
        printf("%d is a prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}