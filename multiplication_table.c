#include <stdio.h>
int main()
{
    int n, term;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        term = n * i;
        printf("%d\n",term);
    }
    return 0;
}