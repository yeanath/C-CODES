#include <stdio.h>

#define n 5

int main(void)
{
    int list[n] = {22, 56, 22, 89, 41};

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + list[i];
    }

    float avg = (float)sum / n;

    printf("Sum = %d, Average = %0.2f\n", sum, avg);

    for (int i = 0; i < n; i++)
    {
        if (list[i] >= avg)
        {
            printf("%d\n", list[i]);
        }
    }
    // version 1
    int max = list[0], k = 0;   // guess: first element is the biggest
    for (int i = 1; i < n; i++) // check the rest (start from index 1)
    { 
        if (list[i] > max)      // found something bigger?
        {                  
            max = list[i];      // update the biggest value
            k = i;              // remember WHERE it was found
        }
    }
    printf("Largest Item = %d, Index = %d\n", max, k);

    // version 2
    int m = 0;                      // guess: index 0 holds the smallest
    for (int i = 1; i < n; i++)     // check the rest
    { 
        if (list[i] <= list[m])     // is this element smaller (or equal)?
        {          
            m = i;                  // remember this index instead
        }
    }
    printf("Smallest Item = %d, Index = %d\n", list[m], m);

    return 0;
}