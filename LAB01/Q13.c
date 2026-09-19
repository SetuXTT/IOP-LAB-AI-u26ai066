//Q13.PROGRAM TO CHECK WHETHER A NO. IS EVEN OR ODD. 

#include <stdio.h>

int main()
{
    int number;
    printf("Identify the number is even or odd:\n");
    printf("Enter a number: ");
    scanf("%d", &number);

    int type = number % 2;

    if(type == 0)
    {
        printf("Ohh,It an even number.\n");
    }else
    {
        printf("Ohh,It an odd number.\n");
    }
    return 0;
}