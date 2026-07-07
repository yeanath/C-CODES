// GCD & LCM
#include <stdio.h>
#include <math.h>
int main()
{
    int n1;
    int n2;
    int rem;
    int LCM;
    int a, b; 

    printf("Enter the value of n1: ");
    scanf("%d", &n1);

    printf("Enter the value of n2: ");
    scanf("%d", &n2);

    a = n1;
    b = n2;

    while (n2 != 0)
    {
        rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    printf("The GCD is %d\n", n1);
    LCM = (a * b) / n1;
    printf("The LCM is %d", LCM);
    return 0;
}