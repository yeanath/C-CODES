// Print the factorial of n
#include <stdio.h>
int fact(int n);
int main()
{
    int x;
    printf("Enter the number : ");
    scanf("%d", &x);
    printf("The factorial is %d", fact(x));
    return 0;
}
int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        int factNM1 = fact(n - 1);
        int factN = fact(n - 1) * n;
        return factN;
    }
}
