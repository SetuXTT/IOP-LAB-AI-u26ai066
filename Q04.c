//Q4.PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES. 

#include <stdio.h>

int main()
{
    double fahrenheit;
    printf("Enter The Temperature In Fahrenheit: ");
    scanf("%lf", &fahrenheit);

    double celusies = 5/9.0 * (fahrenheit - 32.0);
    printf("Temperature In Centigrade Degree Is %f", celusies);
    return 0;
}