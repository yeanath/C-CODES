#include<stdio.h>
#include<math.h>
int main()
{

    int i=0;
    int sum=0;
    while(i<=15){
        sum=sum+(i*i);
        i=((2*i)+1);
    }
    printf("The ans is %d",sum);
    return 0;
}
