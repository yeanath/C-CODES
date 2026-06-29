// Q: 1^2+2^2+3^2+4^2+5^2
#include <stdio.h>
int main()
{

    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i = i + 1)
    {
        sum = sum + i * i;
    }
    printf("The sum is %d", sum);
    return 0;
}
