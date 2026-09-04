#include<stdio.h>

int main()
{
    FILE* fptr;
    fptr=fopen("text.txt", "r");
    int num;
    fscanf(fptr,"%d",&num);
    printf("%d",num);
    fclose(fptr);

    fptr=fopen("text2.md","w");
    char name[]="I am CSE.";
    
    fprintf(fptr,"%s",name);
    fclose(fptr);

    fptr=fopen("text2.md","a");
    char mat[]=" I am currently studying at NSU";
    fprintf(fptr,"%s",mat);
    fclose(fptr);

    return 0;
}