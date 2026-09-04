#include <stdio.h>

int countSearchKey(int arr[], int size, int k)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == k)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, i;
    int arr[100];
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the search key: ");
    scanf("%d", &i);
    printf("Search key appears %d times", countSearchKey(arr, n, i));
    return 0;
}