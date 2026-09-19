/*Q8.EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS. 
WRITE A C PROGRAM TO CONVERT THIS INTO NUMBER OF DAY,HOURS AND MINUTES */

#include <stdio.h>

int main()
{
    int period = 31558150;
    int day, hour, minute;

    day = (period)/(24 * 60 * 60);
    hour = (period)/(60 * 60) - (day * 24);
    minute = (period/60) - (hour * 60) - (day * 60 * 24);

    printf("Total seconds : %d\n", period);
    printf("%d Days, %d Hours, %d Minutes.\n", day, hour, minute);
    return 0;
}