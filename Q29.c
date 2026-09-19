//Q29.PROGRAM TO CHECK WHETHER A NO. IS PALINDROM OR NOT. 

/*PALINDROM : A number that remains same when its digits are reversed,
  reading the same forwards and backwards (such as 121 or 16361).*/

#include <stdio.h>

int main()
{
  int num, remainder;
    int count = 0;

    printf("Enter an integer number: ");
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

  for(int j = 0; j < (count/2); j++)
  {
    if(digit[j] != digit[count - j -1])
    {
      printf("%d is not a palindrome number.", num);
      return 0;
    }
  }

  printf("%d is a palindrome number.", num);

  
  return 0;
}