#include<stdio.h>
#include<string.h>

void searchkey(char arr[],int n)
{
    for(int i=0;arr[i]!=0;i++)
    {
        if(arr[i]==n)
        {
            printf("Found!");
            return;
        }
        else
        {
            printf("Not found!");
            return;
        }
    }
}

int main()
{
    char name[100];
    char n;
    printf("Enter your name: ");
    fgets(name,sizeof(name),stdin);
    name[strcspn(name,"\n")]='\0';
    printf("Enter search key: ");
    scanf("%c",&n);
    searchkey(name,n);
    return 0;
}