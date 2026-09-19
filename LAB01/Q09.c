//Q9.PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.

#include <stdio.h>

int main()
{
    int hour, minute, second;
    
    printf("Please Enter The Value In Hours, Minutes & Seconds:\n");

    printf("Hour: ");
    scanf("%d", &hour);

    printf("Minute: ");
    scanf("%d", &minute);

    printf("Second: ");
    scanf("%d", &second);

    int total_second = (hour * 3600) + (minute * 60) + second;

    printf("Total Time In Seconds Is %d", total_second);

    return 0;
}