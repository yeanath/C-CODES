// Q: 1^1+3^2+5^3+7^4+9^5
#include <stdio.h>
#include <math.h>
int main()
{

    int j = 1;
    int sum = 0;
    for (int i = 1; i <= 9; i = i + 2)

    {
        sum = sum + pow(i, j);

        j = j + 1;
    }
    printf("The sum is %d\n", sum);

    return 0;
}
