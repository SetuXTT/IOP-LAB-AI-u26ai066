//Q24.WRITE A C PROGRAM TO FIND THE VALUE OF Y USING
//                 
//                 1 + x   where n = 1
//      Y(x,n) =   1 + x/n   where n = 2 
//                 1 + x^n   where n = 3
//                 1 + nx   where n > 3 or n < 1

#include <stdio.h>
#include <math.h>

int main()
{
    double x, n, function;
    printf("Enter Y(x,n): ");
    scanf("%lf\n%lf", &x, &n);

    if(n == 1)
    {
        function = 1 + x;
    }else if(n == 2)
    {
        function = 1 + x/n;
    }else if(n == 3)
    {
        function = 1 + pow(x, n);
    }else
    {
        function = 1 + n * x;
    }

    printf("The value of Y(%lf,%lf) = %lf", x, n, function);
    return 0;
}
