/*Q18.PROGRAM TO READ THREE NOS. AND PRINT MAX USING
 CONDITIONAL (? :) OPERATOR.*/ 

#include <stdio.h>
 
int main()
{
    double n1, n2, n3, max;
    printf("Please, Enter three numbers below:\n");

    printf("Enter N1: ");
    scanf("%lf", &n1);

    printf("Enter N2: ");
    scanf("%lf", &n2);

    printf("Enter N3: ");
    scanf("%lf", &n3);

    max = n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);

    printf("The max number out of three is %f", max);

    

}