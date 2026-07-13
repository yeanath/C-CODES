// sin(x)=x-x^3/3!+x^5/5!.....
#include <stdio.h>
int main()
{
    int n;   // for the range
    float x; // input the value of x in degree
    float deg;
    float nr;     // numarator
    float dr;     // denumarator
    float temp;   // for sign(+,-)
    float term; // total(nr/dr)
    float sum;  // for the series

    printf("Enter the value of x in degree : ");
    scanf("%f", &deg);
    printf("Enter range : ");
    scanf("%f",&n);
    x = (deg * 3.14159) / 180; // we have to convert the degree to radian
    nr = x;                    // we have to declare the 1st term manually because it cannot be included in the logic of this series
    dr = 1;
    sum = x;
    for (int i = 2; i <= n; i++)
    {
        nr = nr * x * x;
        dr = dr * (2 * i - 2) * (2 * i - 1); // formula for dr of sin series
        temp = temp * (-1);
        term = temp * (nr / dr);
        sum = sum + term;
    }
    printf("%0.2f", sum);
    return 0;
}