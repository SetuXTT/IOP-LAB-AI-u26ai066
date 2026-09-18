//Q5.PROGRAM TO SWAP TOW VARIABLES USING THIRD VARIABLE. 

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

    int c; //Third Variable
    c = a;
    a = b;
    b = c;

    printf("Value of a and b have Swap:\n");
    printf("a: %d\nb: %d", a, b);


    
    return 0;
}