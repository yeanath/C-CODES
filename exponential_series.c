// e^x=1+x^1/1!+x^2/2!......(same as sin and cos just a little bit different)
#include <stdio.h>
int main()
{
    float x, n, deg, term, nr, dr, sum;
    printf("Enter the value of x : ");
    scanf("%f", &x);
    printf("Enter range : ");
    scanf("%f", &n);

    nr = 1;
    dr = 1;
    sum = 1;
    for (int i = 1; i < n; i++)
    {
        nr = nr * x;
        dr = dr * i;
        term = nr / dr;
        sum = sum + term;
    }
    printf("%0.2f", sum);
    return 0;
}