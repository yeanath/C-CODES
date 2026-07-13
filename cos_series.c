// cos(x)=1-x^2/2!+x^4/4!....(same as the sin one just a little bit different)
#include <stdio.h>
int main()
{
    float x, n, deg, sum, temp, term, nr, dr;

    printf("Enter the value of x in degree : ");
    scanf("%f", &deg);
    printf("Enter the range : ");
    scanf("%f", &n);

    x = (deg * 3.14159) / 180;

    nr = 1;
    dr = 1;
    temp = 1;
    sum = 1;
    for (int i = 2; i <= n; i++)
    {
        nr = nr * x * x;
        dr = dr * (2 * i - 3) * (2 * i - 2); // formula of dr for cos series
        temp = temp * (-1);
        term = (nr / dr) * temp;
        sum = sum + term;
    }
    printf("%0.2f", sum);
    return 0;
}