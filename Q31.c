//Q31.PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.

#include <stdio.h>

int main()
{
    int num, remainder;
    int count = 0;
    int sum = 0;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    for(int temp1 = num; temp1 != 0; temp1 /= 10)
    {
        count++; 
    }

    int digit[count];
    int i = 0;
    
    for(int temp2 = num; temp2 != 0; temp2 /= 10)
    {
        remainder = temp2 % 10;
        digit[i] = remainder;
        i++;
    }

    for(int j = 0; j < count; j++)
    {
        sum += digit[j];
    }

    printf("Sum of individual digits of number %d is %d", num, sum);

    return 0;
}
