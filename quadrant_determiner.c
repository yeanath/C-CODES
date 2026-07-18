#include <stdio.h>
int main()
{
    float x, y;

    printf("Enter x and y coordinates: ");
    scanf("%f %f", &x, &y);

    if (x == 0 && y == 0)
    {
        printf("The point is at the origin.\n");
    }
    else if (x == 0)
    {
        printf("The point lies on the Y-axis.\n");
    }
    else if (y == 0)
    {
        printf("The point lies on the X-axis.\n");
    }
    else if (x > 0 && y > 0)
    {
        printf("The point lies in Quadrant I.\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("The point lies in Quadrant II.\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("The point lies in Quadrant III.\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("The point lies in Quadrant IV.\n");
    }

    return 0;
}