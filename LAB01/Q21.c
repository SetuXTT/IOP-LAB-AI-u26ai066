/*Q21.PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC 
OPERATOR) AND THIS  PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM).*/

#include <stdio.h>

int main()
{
    char operator;
    float n1, n2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers : ");
    scanf("%f %f", &n1, &n2);

    switch(operator)
    {
        case'+':
          result = n1 + n2;
          printf("Result: %.2f + %.2f = %.2f\n", n1, n2, result);
          break;

        case'-':
          result = n1 - n2;
          printf("Result: %.2f - %.2f = %.2f\n", n1, n2, result);
          break;

        case'*':
          result = n1 * n2;
          printf("Result: %.2f x %.2f = %.2f\n", n1, n2, result);
          break;

        case'/':
          if(n2 != 0)
          {
            result = n1 / n2;
          printf("Result: %.2f / %.2f = %.2f\n", n1, n2, result);
          }else
          {
            printf("Arthmetic is not defined.");
          }
          break;

    }


    return 0;
}