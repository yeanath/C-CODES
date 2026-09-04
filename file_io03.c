#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct customer
{
    char fname[20], lname[20];
    int acct_num;
    float acct_balance;
}; 
int num = 0; // total number of customers
void main()
{
    struct customer cust[100];
    FILE *file;
    file = fopen("accounts.dat", "w");
    if (file == NULL)
    {
        fprintf(stderr, "\nError opening accounts.dat\n\n");
        exit(1);
    }
    int i;
    for (i = 0; i < 100; i++)
    {
        printf("Firstname (just hit enter to stop):");
        fgets(cust[i].fname, sizeof(cust[i].fname), stdin);
        // Remove trailing newline left by fgets
        cust[i].fname[strcspn(cust[i].fname, "\n")] = '\0';
        if (strcmp(cust[i].fname, "") == 0)
            break;

        printf("Lastname:");
        fgets(cust[i].lname, sizeof(cust[i].lname), stdin);
        cust[i].lname[strcspn(cust[i].lname, "\n")] = '\0';

        printf("Acct No:");
        scanf("%d", &cust[i].acct_num);
        getchar(); // consume leftover '\n' after scanf

        printf("Acct Balance:");
        scanf("%f", &cust[i].acct_balance);
        getchar(); // consume leftover '\n' after scanf
    }
    num = i;
    fwrite(cust, sizeof(struct customer), i, file);
    fclose(file);
    return 0;
}    