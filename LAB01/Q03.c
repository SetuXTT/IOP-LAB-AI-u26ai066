//Q3.PROGRAM TO CALCULATE GROSS SALARY. 

#include <stdio.h>

int main()
{
    float Basic, DA, HRA, Gross;

    printf("Enter the Basic Salary of employee: ");
    scanf("%f", &Basic);

    if(Basic <= 10000)
    {
        DA = Basic * 0.80; //80% DA
        HRA = Basic * 0.20; //20% HRA
    }else if(Basic <= 20000)
    {
        DA = Basic * 0.90; //90% DA
        HRA = Basic * 0.25; //25% HRA
    }else
    {
        DA = Basic * 0.95; //95% DA
        HRA = Basic * 0.30; //30% HRA
    }

    Gross = Basic + DA + HRA;

    printf("Basic Salary : $%0.2f\n", Basic);
    printf("DA : $%0.2f\n", DA);
    printf("HRA : $%0.2f\n", HRA);
    printf("Gross Salary : $%0.2f\n", Gross);
    
    return 0;
}