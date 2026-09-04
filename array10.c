#include <stdio.h>
#include <string.h>
void oddnumbers(char *arr01, char *arr02)
{
    int i, j = 0;
    for (i = 0; arr01[i] != '\0'; i++)
    {
        if (arr01[i] % 2 != 0)
        {
            arr02[j] = arr01[i];
            j++;
        }
    }
    arr02[j] = '\0';
    printf("Odd  elements: ");
    puts(arr02);
    return;
}

void evennumbers(char *arr01, char *arr02)
{
    int i, j = 0;
    for (i = 0; arr01[i] != '\0'; i++)
    {
        if (arr01[i] % 2 == 0)
        {
            arr02[j] = arr01[i];
            j++;
        }
    }
    arr02[j] = '\0';
    printf("Even elements: ");
    puts(arr02);
    return;
}

int main()
{
    char arr[100];
    char odd[100];
    char even[100];
    printf("Enter the numbers: ");
    fgets(arr, sizeof(arr), stdin);
    /* strip trailing newline that fgets keeps */
    // int len = 0;
    // while (arr[len] != '\0') len++;
    // if (len > 0 && arr[len - 1] == '\n') arr[len - 1] = '\0';
    arr[strcspn(arr, "\n")] = '\0';
    oddnumbers(arr, odd);
    evennumbers(arr, even);
    return 0;
}