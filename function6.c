#include <stdio.h>
float temp_converter(float cel);
int main()
{
    float n;
    printf("Enter the temp in celsius : ");
    scanf("%f", &n);
    float temp = temp_converter(n);
    printf("The farenheit temp is %0.2f", temp);
    return 0;
}
float temp_converter(float cel)
{
    float far = cel * (9.0 / 5.0) + 32;
    return far;
}