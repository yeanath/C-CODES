// Input a value from user and add 18% gst
#include <stdio.h>
void print_gst(float value);
int main()
{
    float value;
    printf("Enter the value : ");
    scanf("%f", &value);
    print_gst(value);
    printf("The value is %0.2f", value); // Changes to parameters in function(print_gst) don't change the calling function(main)
    return 0;
}
void print_gst(float value)
{
    value = value + (value * 0.18);
    printf("The total value is %0.2f\n", value);
}