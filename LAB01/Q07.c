//Q7.PROGRAM TO CALCULATE AREA OF A TRIANGLE(Right Angle Triangle). 

#include <stdio.h>

int main()
{
    double height;
    double base;

    printf("Enter the value of height(m) and base(m):\n");

    printf("Height: ");
    scanf("%lf", &height);

    printf("Base: ");
    scanf("%lf", &base);

    double area = 1/2.0 * height * base;

    printf("Area of triangle is %fm^2", area);
    
    return 0;
}