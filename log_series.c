// ln(1+x)=x-x^2/2+x^3/3-x^4/4+....
#include <stdio.h>
int main(void)
{
    float x;
    int n;
    float nr, dr, term, sum;
    int temp = 1;
    printf("Enter the value : ");
    scanf("%f", &x);
    printf("Enter the range : ");
    scanf("%d", &n);
    nr = x;
    dr = 1;
    sum = x;
    for (int i = 2; i <= n; i++)
    {
        nr = nr * x;
        dr = i;
        temp = -temp;
        term = temp * (nr / dr);
        sum = sum + term;
    }
    printf("%f", sum);

    return 0;
}
