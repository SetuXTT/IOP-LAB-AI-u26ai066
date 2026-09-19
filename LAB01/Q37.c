//Q37.PROGRAM TO PRINT 2,4,6,8,10,12………N.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Even Numbers Series: ");

    int i = 0;
    while(i <= num)
    {
        if(i % 2 == 0)
        {
            printf("%d,", i);

        }

        i++;
    }

    return 0;
}