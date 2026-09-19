//Q1.PROGRAM TO CALCULATE SIMPLE INTEREST.

#include <stdio.h>

int main()
{
    double Principal, Rate, Years;

    printf("Principal: ");
    scanf("%lf", &Principal);

    printf("Interest Rate: ");
    scanf("%lf", &Rate);

    printf("Time Peroid In Years: ");
    scanf("%lf", &Years);

    double SimpleInterest = (Principal * Rate * Years)/100;
    printf("Simple Interest: %f", SimpleInterest);


    return 0;
}