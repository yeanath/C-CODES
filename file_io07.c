#include <stdio.h>

struct student
{
    char name[100];
    int id;
    float gpa;
};

int main()
{
    struct student s[2];
    FILE *fp;

    for (int i = 0; i < 2; i++)
    {
        printf("Enter name, id, and GPA for student %d: ", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].id, &s[i].gpa);
    }

    fp = fopen("student_log.txt", "w");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(fp, "%-15s %-10s %-10s\n", "Name", "ID", "GPA");
    fprintf(fp, "----------------------------------\n");

    for (int i = 0; i < 2; i++)
    {
        fprintf(fp, "%-15s %-10d %-10.2f\n", s[i].name, s[i].id, s[i].gpa);
    }

    fclose(fp);
    printf("Records saved to student_log.txt\n");
    return 0;
}