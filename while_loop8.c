//Q: even or odd with while loop
#include<stdio.h>
#include<math.h>
int main()
{

    int i=1;
    int j;

    while(i<=100000)
    {
        printf("Enter the number: ");
        scanf("%d",&i);
        if(i%2==0)
        {
            printf("even\n",i);
        }
        else
        {
            printf("odd\n",i);
        }

    }
    return 0;
}
