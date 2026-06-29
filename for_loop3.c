// Q: 1^2-3^2+5^2-7^2+9^2
#include <stdio.h>
#include <math.h>
int main()
{

    int sum = 0;
    int c = 1;
    for (int i = 1; i <= 9; i = i + 2)
    {
        if (c % 2 == 0)
        {
            sum = sum - (i * i);
        }
        else
        {
            sum = sum + (i * i);
        }

        c = c + 1;
    }
    printf("The ans is %d", sum);
    return 0;
}
