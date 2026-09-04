// string cat

#include<stdio.h>

int main()
{
    char s1[50]="Yeanath";
    char s2[]="Ovi";
    int i=0;
    while(s1[i]!=0)
    {
        i++;
    }   
    int j;
    for(j=0;s2[j]!=0;j++)
    {
        s1[i+j]=s2[j];
        
    }
    s1[i+j]='\0';
    puts(s1);
    return 0;
}