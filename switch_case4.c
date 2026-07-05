//Mark=Grade or not
#include <stdio.h>
int main()
{
    int n;
    char g;
    printf("Enter marks: ");
    scanf("%d", &n);
    printf("Enter grade: ");
    scanf(" %c", &g);
    switch (n)
    {
    case 80 ... 100:
    {
        if (g == 'A')
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        break;
    }
    case 70 ... 79:
    {
        if (g == 'B')
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        break;
    }
    default:
        printf("Fail");
    }
    return 0;
}