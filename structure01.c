#include <stdio.h>
#include <string.h>

struct student
{
    char name[50];
    int id;
    float cgpa;
};

int main()
{
    int n;
    printf("Enter number of student: ");
    scanf("%d", &n);
    while (getchar() != '\n')
        ;
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name for student %d: ", i + 1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Enter id for student %d: ", i + 1);
        scanf("%d", &s[i].id);
        while (getchar() != '\n')
            ;
        printf("Enter cgpa for student %d: ", i + 1);
        scanf("%f", &s[i].cgpa);
        while (getchar() != '\n')
            ;
    }

    int highest_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[i].cgpa > s[highest_index].cgpa)
        {
            highest_index = i;
        }
    }
    printf("\n---Student with highest CGPA---\n");
    printf("%s\n", s[highest_index].name);
    printf("%d\n", s[highest_index].id);
    printf("%.2f", s[highest_index].cgpa);

    return 0;
}