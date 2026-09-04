#include <stdio.h>
#include <string.h>

struct student
{
    char name[100];
    int id;
    int marks;
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    while (getchar() != '\n')
        ;
    struct student s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter name for student %d: ", i+1);
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';
        printf("Enter id for student %d: ", i+1);
        scanf("%d", &s[i].id);
        while (getchar() != '\n');
        printf("Enter marks for student %d: ", i+1);
        scanf("%d", &s[i].marks);
        while (getchar() != '\n');
    }

    int highestindex = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i + 1].marks > s[highestindex].marks)
        {
            highestindex=i;
        }
    }
    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", s[highestindex].name);
    printf("ID: %d\n", s[highestindex].id);
    printf("Marks: %d\n", s[highestindex].marks);
    return 0;
}