// strcmp

#include<stdio.h>

int main()
{
    char s1[50]="Yeanath";
    char s2[]="Ovi";
    int i=0;
    while(s1[i]!=0 && s1[i]==s2[i])
    {
        i++;
        if(s1[i]>s2[i])
        return 1;
        else if(s1[i]<s2[i])
        return -1;
    }
    return 0;
}