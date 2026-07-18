#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, rem, count = 0; 
    float sum = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if (num == sum)
    {
        printf("%d is an armstong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }

    return 0;
}