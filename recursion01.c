#include <stdio.h>

void printnumbers(int i, int j)
{
    if (i > j)
    {
        return;
    }
    else
    {
        printf("%d ", i);
        printnumbers(i + 1, j);
    }
}

int main()
{
    int x, y;
    printf("Enter the lowerlimit : ");
    scanf("%d", &x);
    printf("Enter the upper limit : ");
    scanf("%d", &y);
    printnumbers(x, y);
    return 0;
}