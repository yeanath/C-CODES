#include <stdio.h>
void print_hello();
void print_goodbye();
int main()
{
    print_hello();   // calls the print_hello function
    print_goodbye(); // calls the print_goodbye function
    return 0;
}
void print_hello()
{
    printf("Hello!\n");
}
void print_goodbye()
{
    printf("Goodbye!");
}