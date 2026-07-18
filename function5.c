// Input values from user and print the area of rectangle, circle and square
// Note : The code can also be written in the commented out way
#include <stdio.h>
#include <math.h>
/* float */ void squareArea(float a);
/* float */ void rectangleArea(float a, float b);
/* float */ void circleArea(float rad);
int main()
{
    float a, b, rad;
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    printf("Enter rad : ");
    scanf("%f", &rad);
    /*printf("The area of the square is %0.2f\n", squareArea(a));
    printf("The area of the rectangle is %0.2f\n", rectangleArea(a, b));
    printf("The area of the circle is %0.2f\n", circleArea(rad));*/
    squareArea(a);
    rectangleArea(a, b);
    circleArea(rad);
    return 0;
}
/* float */ void squareArea(float a)
{
    // return pow(a, 2);
    printf("The area of the square is %0.2f\n", pow(a, 2));
    return 0;
}
/* float */ void rectangleArea(float a, float b)
{
    // return a * b;
    printf("The area of the rectangle is %0.2f\n", a * b);
    return 0;
}
/* float */ void circleArea(float rad)
{
    // return 3.1416 * rad * rad;
    printf("The area of the circle is %0.2f\n", 3.1416 * rad * rad);
    return 0;
}