//Q28.PROGRAM TO CHECK WHETHER A NO. IS ARMSTRONG OR NOT.(Without power function)

/*ARMSTRONG NO. : A number that equals sum of its own digits, where
  each digit is raised to the power of the total number of digits.*/

#include <stdio.h>

int main()
{
    int num, remainder;
    int count = 0;
    int sum = 0;
    int power = 1;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    for(int temp1 = num; temp1 != 0; temp1 /= 10)
    {
        count++; 
    }

    for(int temp2 = num; temp2 != 0; temp2 /= 10)
    {
        remainder = temp2 % 10;


        for(int i = 0; i < count; i++)
        {
            power *= remainder;
        }

        sum += power;
        power = 1;
    }

    if(sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}