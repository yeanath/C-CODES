#include<stdio.h>
#include<string.h>
struct address
{
    int house;
    int road;
    char area[100];
    char city[100];
};
    struct address add[5];

    void print_address(struct address add)
    {
        printf("%d, %d, %s, %s",add.house,add.road,add.area,add.city);
        return;
    }

int main()
{
    printf("Enter informations for person 1 :\n");
    scanf("%d",&add[0].house);
    scanf("%d",&add[1].road);
    scanf("%s",&add[2].area);
    scanf("%d",&add[3].city);
    printf("Enter informations for person 2 :\n");
    scanf("%d",&add[0].house);
    scanf("%d",&add[1].road);
    scanf("%s",&add[2].area);
    scanf("%d",&add[3].city);
    printf("Enter informations for person 3 :\n");
    scanf("%d",&add[0].house);
    scanf("%d",&add[1].road);
    scanf("%s",&add[2].area);
    scanf("%d",&add[3].city);
    printf("Enter informations for person 4 :\n");
    scanf("%d",&add[0].house);
    scanf("%d",&add[1].road);
    scanf("%s",&add[2].area);
    scanf("%d",&add[3].city);
    printf("Enter informations for person 5 :\n");
    scanf("%d",&add[0].house);
    scanf("%d",&add[1].road);
    scanf("%s",&add[2].area);
    scanf("%d",&add[3].city);

    print_address(add[0]);
    print_address(add[1]);
    print_address(add[2]);
    print_address(add[3]);
    print_address(add[4]);
    
    return 0;
}