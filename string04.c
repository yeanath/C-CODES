// str copy

#include<stdio.h>

int main()
{
    //int n;
    //scanf("%d",&n);
    char s1[]="Yeanath";
    char s2[]="Ovi";
    int i;
    for( i=0;s2[i]!=0;i++)
    {
        s1[i]=s2[i];
    }
    s1[i]='\0';
    puts(s1);
    return 0;
}