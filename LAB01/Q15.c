//Q15.PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION. 

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
    printf("Percentage: %f\n", per);

    if(per >= 80)
    {
        printf("First Division.\n");
    }else if(per >= 60)
    {
        printf("Second Division.\n");
    }else if(per >= 40)
    {
        printf("Third Division.\n");
    }else
    {
        printf("Failed.\n");
    }


    return 0;
}