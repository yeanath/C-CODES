#include <stdio.h>
void print_namaste();
void print_bonjur();
int main()
{
      char ch;
    printf("Enter 'i' for Indian & 'f' for Franch : ");
  
    scanf("%c", &ch);
    if (ch == 'i')
    {
        print_namaste();
    }
    else if (ch == 'f')
    {
        print_bonjur();
    }
    return 0;
}
void print_namaste()
{
    printf("Namaste :)\n");
}
void print_bonjur()
{
    printf("Bonjur :)");
}