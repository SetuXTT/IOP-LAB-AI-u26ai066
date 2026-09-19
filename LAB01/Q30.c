//Q30.PROGRAM TO REVERSE OF A GIVEN NO.

#include <stdio.h>

int main()
{
    int num, remainder;
    int count = 0;
    printf("Enter Number: ");
    scanf("%d", &num);

    
    for(int temp1 = num; temp1 != 0; temp1 /= 10)
    {
        count++; 
    }
    
  int digit[count];
  int i = 0;

  for(int temp2 = num; temp2 != 0; temp2 /= 10)
  {
    remainder = temp2 % 10;
    digit[i] = remainder;
    i++;
  }

  printf("Reverse number: ");

  for(int j = 0;  j < count; j++)
  {
    printf("%d", digit[j]);
  }

  return 0;

}