// Print the nth term of fibonacci series
#include <stdio.h>
int fibo(int n);
int main()
{
    int x;
    printf("Enter the range : ");
    scanf("%d", &x);
    printf("The last term is %d", fibo(x));
    return 0;
}
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }
    int fiboNM2 = fibo(n - 2);
    int fiboNM1 = fibo(n - 1);
    int fiboN = fiboNM2 + fiboNM1;
    return fiboN;
}