#include <stdio.h>
int main()
{
    int num, first_digit, last_digit;
    printf("Enter a number : ");
    scanf("%d", &num);
    last_digit = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }
    first_digit = num;
    printf("The first digit is %d\n", first_digit);
    printf("The last digit is %d", last_digit);
    return 0;
}