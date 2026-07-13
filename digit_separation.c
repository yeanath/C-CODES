#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    int rem;
    int sum = 0;
    printf("Enter number : ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        printf("%d\n", rem);
        num = num / 10;
    }
    printf("The sum of the digits is %d\n", sum);

        return 0;
}
