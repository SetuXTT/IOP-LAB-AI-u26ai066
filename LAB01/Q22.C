//Q22.PROGRAM TO CALCULATE FACTORIAL OF A NO.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int factorial = 1;

    for(int i = 2; i <= num; i++)
    {
        factorial *= i;

    }
    printf("Factorial of number %d is %d", num, factorial);
    return 0;
}