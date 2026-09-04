#include <stdio.h>
#include <string.h>

struct birth_certificate
{
    int day, month, year;
    char name[100], fatherName[100], motherName[100];
};

int main()
{
    int n;
    printf("Enter the number of person: ");
    scanf("%d", &n);
    while (getchar() != '\n');

    struct birth_certificate s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the name of person %d: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Enter father's name: ");
        fgets(s[i].fatherName, sizeof(s[i].fatherName), stdin);
        printf("Enter mother's name: ");
        fgets(s[i].motherName, sizeof(s[i].motherName), stdin);
        printf("Enter date of birth (dd/mm/yy): ");
        scanf("%d %d %d", &s[i].day, &s[i].month, &s[i].year);
        while (getchar() != '\n');
    }

    int highest_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i].year < s[highest_index].year)
            highest_index = i;
        else if (s[i].year == s[highest_index].year && s[i].month < s[highest_index].month)
            highest_index = i;
        else if (s[i].year == s[highest_index].year && s[i].month == s[highest_index].month && s[i].day < s[highest_index].day)
            highest_index = i;
    }
    printf("\n---Senior Citizen---\n");
    printf("Name: %s\n", s[highest_index].name);
    printf("Name: %s\n", s[highest_index].fatherName);
    printf("Name: %s\n", s[highest_index].motherName);

    return 0;
}