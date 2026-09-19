//Q32.PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS. 

#include <stdio.h>

int main()
{
    int n, num;
    int max, secondMax;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);

    max = num;
    secondMax = num;

    for(int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
        {
            secondMax = max;
            max = num;
        }
        else if(num > secondMax)
        {
            secondMax = num;
        }
    }

    printf("MAX = %d\n", max);
    printf("SECOND MAX = %d\n", secondMax);

    return 0;
}