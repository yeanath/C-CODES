#include <stdio.h>
int main()
{
    char ch;

    printf("Enter an alphabet character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32; // lowercase to uppercase
        printf("Converted to uppercase: %c\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32; // uppercase to lowercase
        printf("Converted to lowercase: %c\n", ch);
    }
    else
    {
        printf("'%c' is not an alphabet character.\n", ch);
    }

    return 0;
}