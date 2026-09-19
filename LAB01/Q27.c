//Q27.PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT. 

#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter an integer number: ");
    scanf("%d", &num);


    for(i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            printf("Not a prime number.");
            break;
        }

    }

    if(i == num)
        {
            printf("Number is prime number.");
        }

    return 0;
}