//Q20.PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE. 

#include <stdio.h>

int main()
{
    int menu;
    double a, b;
    printf("Simple Calculater: Enter two numbers a and b.\n");
    
    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("1. Add two numbers.\n");
    printf("2.Subtract two numbers.\n");
    printf("3.Multiply two numbers.\n");
    printf("4.Division two numbers.\n");

    printf("Menu option: ");
    scanf("%d", &menu);

    switch(menu)
    {
        case 1:
         printf("Add: %f", a + b);
         break;

        case 2:
         printf("Subtract: %f", a - b);
         break;

        case 3:
         printf("Multiply: %f", a * b);
         break;

        case 4:
         if(b != 0)
          {
          printf("Division: %f", a / b);
          }else
          {
            printf("Arthmetic is not defined.");
          }
         break;
    }
    return 0;
}