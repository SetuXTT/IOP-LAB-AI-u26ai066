//Q36.PROGRAM TO PRINT 1,3,5,7,9………N. 

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Odd Numbers Series: ");

    int i = 1;
    while(i <= num)
    {
        if(i % 2 != 0)
        {
            printf("%d,", i);

        }

        i++;
    }

    return 0;
}