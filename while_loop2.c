#include<stdio.h>
#include<math.h>
int main()
{

    int i=1;
    int j=1;
    int sum=0;
    while(i<=9)

    {
        sum=sum+pow(i, j);

        i=i+2;
        j=j+1;

    }
    printf("The sum is %d\n",sum);


    return 0;
}
