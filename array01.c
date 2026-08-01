#include <stdio.h>

int main(void)
{
    int list[5] = {3, 6, 7, 4, 9}; // declared but never used below
    int alist[3];

    printf("Enter three numbers :\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &alist[i]); // & is required: scanf needs the address, we are storing items to the list
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", alist[i]); // printing the values that we just stored
    }

    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum = sum + alist[i];
    }
    printf("%d %0.2f\n", sum, sum / 3.0); // 3.0 forces float division

    return 0;
}