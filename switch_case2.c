// Vowel or consonent
#include <stdio.h>
#include <math.h>
int main()
{
    char x;
    printf("Enter the letter ");
    scanf(" %c", &x);
    switch (x)
    {
    case 'a':
        printf("The letter is a vowel");
        break;
    case 'A':
        printf("The letter is a vowel");
        break;
    case 'e':
        printf("The letter is a vowel");
        break;
    case 'E':
        printf("The letter is a vowel");
        break;
    case 'i':
        printf("The letter is a vowel");
        break;
    case 'I':
        printf("The letter is a vowel");
        break;
    case 'o':
        printf("The letter is a vowel");
        break;
    case 'O':
        printf("The letter is a vowel");
        break;
    case 'u':
        printf("The letter is a vowel");
        break;
    case 'U':
        printf("The letter is a vowel");
        break;
    default:
        printf("The letter is consonent");
    }
    return 0;
}
