#include <stdio.h>
int main()
{
    int choice;
    float value;
    float x;
    printf("Enter your choice(1-4): ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        printf("Meter to centimeter\n");
        printf("Enter your value in meter: ", value);
        scanf("%f", &value);
        printf("%.2f centimeter", x = value * 100);
        break;
    }
    case 2:
    {
        printf("Kilogram to gram\n");
        printf("Enter your value in Kilogram: ", value);
        scanf("%f", &value);
        printf("%.2f gram", x = value * 1000);
        break;
    }
    case 3:
    {
        printf("Hour to minute\n");
        printf("Enter your value in hour: ", value);
        scanf("%f", &value);
        printf("%.2f minute", x = value * 60);
        break;
    }
    default:
        printf("Invalid choice!!!");
    }
    return 0;
}
