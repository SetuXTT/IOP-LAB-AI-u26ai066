//Q17.PROGRAM TO READ THREE NOS. AND PRINT MAX USING LOGICAL OPERATOR.(&&) 

#include <stdio.h>
 
int main()
{
    double n1, n2, n3;
    printf("Please, Enter three numbers below:\n");

    printf("Enter N1: ");
    scanf("%lf", &n1);

    printf("Enter N2: ");
    scanf("%lf", &n2);

    printf("Enter N3: ");
    scanf("%lf", &n3);

    if(n1 >= n2 && n1 >= n3)
    {
        printf("Max no. : %f", n1);

    }else if(n2 >= n1 && n2 >= n3)
    {
         printf("Max no. : %f", n2);

    }else if(n3 >= n1 && n3 >= n2)
    {
         printf("Max no. : %f", n3);
    }

     
    return 0;
}