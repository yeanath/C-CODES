#include<stdio.h>
#include<string.h>
typedef struct student
{
    int roll;
    int id;
    char name[100];
}st;
    st Yeanath;
   
    
int main()
{
    Yeanath.roll=25;
    Yeanath.id=262;
    strcpy(Yeanath.name, "My name is Md. Yeanath Hossain");
    printf("%d\n",Yeanath.roll);
    printf("%d\n",Yeanath.id);
    printf("%s\n",Yeanath.name);
    return 0;
}