#include <stdio.h>

void printnum(int i, int j)
{
    if (i < j)
    {
        return;
    }
    else
    {
        printf("%d", i);
        printnum(i - 1, j);
    }
    return;
}

int main()
{
    int x, y;
    printf("Enter upper and lower value : ");
    scanf("%d %d", &x, &y);
    printnum(x, y);
    return 0;
}