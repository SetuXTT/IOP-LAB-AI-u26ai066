//Q25.PROGRAM TO PRINT TABLE OF ANY NO.

#include <stdio.h>

int main()
{
    int num, table;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("\n");
    printf("The Table Of %d:\n", num);

    for(int i = 1; i <= 10; i++)
    {
        table = num * i;
        printf("%d x %d = %d\n", num, i, table);
    }
    return 0;
}