//Q11.PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME. 

#include <stdio.h>

int main()
{
    int totalSecond;
    printf("Enter Total Seconds : ");
    scanf("%d", &totalSecond);

    int hour, minute, second;
    hour = (totalSecond) / (60 * 60);
    minute = (totalSecond / 60) - (hour * 60);
    second =  totalSecond - (minute * 60) - (hour * 60 * 60);

    printf("Time :- %02d:%02d:%02d", hour, minute, second);
    return 0;

}