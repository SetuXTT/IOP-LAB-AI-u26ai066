/*Q2.PROGRAM TO READ MARKS OF FIVE SUBJECT OF A STUDENT AND CALCULATE 
TOTAL AND PERCENTAGE.*/

#include <stdio.h>

int main()
{
    int math, phy, chem, eng, comp;
    printf("Students, Enter Your Marks Out of 100:\n");

    printf("MATHS: ");
    scanf("%d", &math);

    printf("PHYSICS: ");
    scanf("%d", &phy);

    printf("CHEMISTRY: ");
    scanf("%d", &chem);

    printf("ENGLISH: ");
    scanf("%d", &eng);

    printf("COMPUTER: ");
    scanf("%d", &comp);

    int sum = math + phy + chem + eng + comp;
    printf("Total Marks Out Of 500: %d\n", sum);

    double per = (sum/500.0)*100;
    printf("Percentage: %f", per);


    return 0;
}