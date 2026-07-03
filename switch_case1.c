// Show operation
#include <stdio.h>
#include <math.h>
int main()
{

    int x;
    printf("Enter a number ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Add");
        break;
    case 2:
        printf("Substract");
        break;
    case 3:
        printf("Multiply");
        break;
    case 4:
        printf("Divide");
        break;
    case 5:
        printf("Goodbye!!!");
        break;
    default:
        printf("Invalid input");
    }

    return 0;
}
