#include <stdio.h>

int main()
{
    int num, orginal, rem, reversed = 0;
    printf("Enter an integer : ");
    scanf("%d", &num);
    orginal = num;
    while (num != 0)
    {
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num = num / 10;
    }
    if (orginal == reversed)
    {
        printf("%d is a palindrom integer", orginal);
    }
    else
    {
        printf("%d is not a palindrom integer", orginal);
    }
    return 0;
}