// sum of n natural numbers
#include <stdio.h>
int sum(int n);
int main()
{
    printf("The sum is %d", sum(5));
    return 0;
}
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int sumNM1; // it means 1 to n-1
    sumNM1 = sum(n - 1);
    int sumN; // it means 1 to n
    sumN = sumNM1 + n;
    return sumN;
}