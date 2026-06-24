#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1;
    float x2, y2;
    float x3, y3;

    printf("Enter coordinates for the first vertex (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    printf("Enter coordinates for the second vertex (x2 y2): ");
    scanf("%f %f", &x2, &y2);
    printf("Enter coordinates for the third vertex (x3 y3): ");
    scanf("%f %f", &x3, &y3);

    // Calculate the lengths of the sides
    float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    // Calculate the perimeter
    float perimeter = a + b + c;
    printf("The perimeter of the triangle is: %.2f\n", perimeter);
    // Calculate the semi-perimeter
    float s = perimeter / 2;
    printf("The semi-perimeter of the triangle is: %.2f\n", s);
    // Calculate the area
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is: %.2f\n", area);
    float arealite = area/2;
    float area_pro = area*2;
    if (area<=50)
    {
        printf("area pro is %.2f\n",area_pro);
    }
    else
    {
        printf("area lite is %.2f\n",arealite);
    }    
    return 0;
}