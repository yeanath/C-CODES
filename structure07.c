#include <stdio.h>
#include <string.h>

struct BOOK
{
    char title[100];
    char author[100];
    float price;
};

void display_BOOK(struct BOOK s[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n---BOOK %d---\n", i + 1);
        printf("Tital: %s\n", s[i].title);
        printf("Author: %s\n", s[i].author);
        printf("Price: %0.2f\n", s[i].price);
    }
    return;
}

int main()
{
    int n;
    printf("Enter the number of books: ");
    scanf("%d", &n);
    while (getchar() != '\n')
        ;
    struct BOOK s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the title for book %d: ", i + 1);
        fgets(s[i].title, sizeof(s[i].title), stdin);
        s[i].title[strcspn(s[i].title, "\n")] = '\0';
        printf("Enter the author name for book %d: ", i + 1);
        fgets(s[i].author, sizeof(s[i].author), stdin);
        s[i].author[strcspn(s[i].author, "\n")] = '\0';
        printf("Enter the price of book %d: ", i + 1);
        scanf("%f", &s[i].price);
        while (getchar() != '\n')
            ;
    }
    display_BOOK(s, n);
    return 0;
}