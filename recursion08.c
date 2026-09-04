#include <stdio.h>
const char *words[] = {"Zero", "One", "Two", "Three", "Four",
                       "Five", "Six", "Seven", "Eight", "Nine"};
void printdigits(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printdigits(n / 10);
        printf("%s ", words[n % 10]);
    }
    return;
}

int main()
{
    int num;
    scanf("%d", &num);
    printdigits(num);
    return 0;
}