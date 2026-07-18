#include <stdio.h>
void print_table(int n);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    print_table(n);
    return 0;
}

void print_table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}
