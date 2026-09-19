//Q33.PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.

#include <stdio.h>

int main()
{
    int n, num;
    int max, min;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");
    scanf("%d", &num);

    max = num;
    min = num;

    for(int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if(num > max)
        {
            max = num;
        }

        if(num < min)
        {
            min = num;
        }
    }

    printf("MAX = %d\n", max);
    printf("MIN = %d\n", min);

    return 0;
}