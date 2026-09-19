/*Q35.READ A NUMBER N AND PRINT A SINGLE DIGIT
      ANSWER SHOWING SUM OF DIGIT OF N*/
      
#include <stdio.h>

int main()
{
    int n, digit, sum;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n >= 10)
    {
        sum = 0;

        while(n != 0)
        {
            digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        n = sum;
    }

    printf("Single digit answer = %d\n", n);

    return 0;
}