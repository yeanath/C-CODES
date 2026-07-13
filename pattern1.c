/* *
   **
   ***
   ****
   ***** */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter range : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

/* When the 1st loop condition is true it will enters the 2nd loop.
 j=1, which is less then i, condition is true it, will print a *.
 Then j increses by one and check the condition, here j=2, is greater than i=1, so it returns to loop 1 and i becomes 2,
 it will check the condition and will enter loop 2.
 The 2nd loop will keep running until the value of j becomes equal to or greater than i — as long as it isn't,
 it will keep running the loop until j is greater than i.
 Then the 1st loop's condition becomes true again, so it enters the 2nd loop, prints the 2nd star, and so on... */
