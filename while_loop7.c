//Q: -1+3+15+35
#include<stdio.h>
#include<math.h>
int main()
{
    int i=1;
    int sum=0;
    while(i<=4){
        sum=sum+((2*i-1)*(2*i-3));
        i=i+1;
    }
    printf("The sum is %d",sum);
    return 0;

}
