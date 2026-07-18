#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    int s = sum(a, b);
    printf("The sum is %d", s);
    return 0;
}
int sum(int x, int y) // a copy of a & b will come here
{
    return x + y; // then the sum will return to line 10
}