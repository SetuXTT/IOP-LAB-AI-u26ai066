//Q12.PROGRAM TO PRINT ASCII CODE OF ANY CHARACTER. 

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    printf("ASCII code of %c is %d", ch, ch);
    return 0;
}