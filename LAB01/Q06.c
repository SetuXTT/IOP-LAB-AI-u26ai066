//Q6.PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.

#include <stdio.h>

int main()
{
    int a; //First Variable
    int b; //Second Variable

    printf("Enter Any Integral Number In a and b\n");

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    //Now,Swaping Two Varaible Without Using Third Varaible.
    //Let, a = x and b = y

    a = a + b; // a = x + y
    b = a - b; // b = (x + y) - (y) = x , (b = x)
    a = a - b; // a = (x + y) - (x) = y , (a = y)

    
    printf("Value of a and b have Swap:\n");
    printf("a: %d\nb: %d", a, b);
    
    return 0;
}