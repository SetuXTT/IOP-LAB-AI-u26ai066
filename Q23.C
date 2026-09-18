/*Q23.PROGRAM TO READ TWO NOS. AND CALCULATE POWER
 WITHOUT USING HEADER FILE(<MATH.H>).*/ 

#include <stdio.h>

int main()
{
    int base, exponent;
    int power = 1;

    printf("Enter Base: ");
    scanf("%d", &base);

    printf("Enter Exponent: ");
    scanf("%d", &exponent);

    for(int i = 1; i <= exponent; i++)
    {
        power *= base;
    }
    printf("%d raised to the power of %d is %d", base, exponent, power);
    return 0;
}
