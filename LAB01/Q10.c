/*Q10.WRITE C PROGRAM TO CALCULATE CUT OFF MARK OF A STUDENT USING THE FORMULA.

CM = M/2+P/2+C/2+E 
WHERE CM = Cut off mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100*/

#include <stdio.h>

int main()
{
    double M, P, C, E;
    printf("Students, Enter Your Marks:\n");

    printf("Marks in Mathematics out of 200: ");
    scanf("%lf", &M);

    printf("Marks in Physics out of 200: ");
    scanf("%lf", &P);

    printf("Marks in Chemistry out of 200: ");
    scanf("%lf", &C);

    printf("Marks in entrance examination out of 100: ");
    scanf("%lf", &E);
 
    double CM = (M/2) + (P/2) + (C/2) + E;
    printf("The Cuff-Off Marks: %f", CM);
    return 0;
}