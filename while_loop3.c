#include<stdio.h>
#include<math.h>
int main()
{

    int i=1;
    int sum=0;
    int c=1;
    while(i<=9)
    {
        if(c%2==0)
        {
            sum=sum-(i*i);

        }
        else
        {
            sum=sum+(i*i);
        }
        i=i+2;
        c=c+1;

    }
    printf("The ans is %d",sum);
    return 0;
}
