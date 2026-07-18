#include <stdio.h>
int main()
{
    float cp, sp, amount;

    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp)
    {
        amount = sp - cp;
        printf("Profit of %.2f\n", amount);
    }
    else if (cp > sp)
    {
        amount = cp - sp;
        printf("Loss of %.2f\n", amount);
    }
    else
    {
        printf("Break-even, no profit no loss.\n");
    }

    return 0;
}
