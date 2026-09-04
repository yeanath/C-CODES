#include<stdio.h>
#include<string.h>
struct student
{
    char name[100];
    int id;
    int roll;
};
int main()
{
    struct student Yeanath, Redwan, Ovi;
    strcpy(Yeanath.name, "My name is Md. Yeanath Hossain");  
    strcpy(Redwan.name, "My name is Redwan Ahmed Khandakar");  
    strcpy(Ovi.name, "My name is Mominul Alam Ovi"); 
    Yeanath.id=2621;
    Redwan.id=26215;
    Ovi.id=26526;
    Yeanath.roll=25; 
    Redwan.roll= 26;
    Ovi.roll= 27;
    printf("%s %s %s %d %d %d",Yeanath.name,Redwan.name,Ovi.name,Yeanath.id,Redwan.id,Ovi.id);
    return 0;
}