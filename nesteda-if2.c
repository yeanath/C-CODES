// Largest among three numbers
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is largest", a);
        }
        else if (c > b)
        {
            printf("%d is largest", c);
        }
    }
    else if (b > c)
    {
        printf("%d is largest", b);
    }
    else
        printf("%d is largest", c);
    return 0;
}