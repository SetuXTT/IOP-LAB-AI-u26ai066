//Q26.PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W  1 TO N. 

#include <stdio.h>

int main()
{
    int num, oddSum, evenSum;
    oddSum = 0;
    evenSum = 0;

    printf("Enter N: ");
    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        if(i % 2 != 0)
        {
            oddSum += i;
        }
    }

    for(int i = 1; i <= num; i++)
    {
        if(i % 2 == 0)
        {
            evenSum += i;
        }
    }

    printf("Sum of odd numbers between 1 to %d: %d\n", num, oddSum);
    printf("Sum of even numbers between 1 to %d: %d\n", num, evenSum);
    return 0;
}