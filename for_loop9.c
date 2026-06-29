// GCD & LCM
#include <stdio.h>

int main()
{
    int n1, n2, rem;
    int a, b;

    printf("Enter the value of n1: ");
    scanf("%d", &n1);

    printf("Enter the value of n2: ");
    scanf("%d", &n2);

    a = n1;
    b = n2;

    for (rem = n1 % n2; rem != 0; rem = n1 % n2)
    {
        n1 = n2;
        n2 = rem;
    }

    printf("The GCD is %d\n", n2);

    int LCM = (a * b) / n2;
    printf("The LCM is %d\n", LCM);

    return 0;
}