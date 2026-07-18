#include<stdio.h>
int print_table(int n);

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    print_table(n);
    return 0;
}

int print_table(int n)
{
    for(int i=1;i<=10;i++)
    {
        return i*n;
    }
    return 0;
}
