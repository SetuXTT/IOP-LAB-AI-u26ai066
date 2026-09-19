//Q34.PROGRAM TO PRINT FIBONACCI SERIES.(0,1,1,2,3…) 

#include <stdio.h>

int main()
{
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    int digits[terms];
    digits[0] = 0;
    digits[1] = 1;

    int a = 0;
    int b = 1;
    
    for(int i = 2; i < terms; i++)
    {
        digits[i] = a + b;
        a = b;
        b = digits[i];

    }

    printf("Fibonacci Series: ");

    for(int i = 0; i < terms; i++)
    {
        printf("%d ", digits[i]);
    }
    return 0;
}