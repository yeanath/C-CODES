#include <stdio.h>
int main()
{
    int n, i;
    int t1 = 0, t2 = 1, next, sum = 0;
    printf("Enter the range : ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (i = 1; i <= n; i++)
    {
        printf("%d ", t1);
        sum = sum + t1;
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
    printf("Sum of Fibonacci Series = %d\n", sum);
    return 0;
}