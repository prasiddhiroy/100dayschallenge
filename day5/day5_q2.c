#include <stdio.h>
int main() 
{
    int ts, hours, minutes, seconds;

    // Input
    printf("Enter time in seconds: ");
    scanf("%d", &ts);

    // Conversion
    hours = ts / 3600;        // 1 hour = 3600 seconds
    minutes = (ts % 3600) / 60; // remaining minutes
    seconds = ts % 60;        // remaining seconds

    // Output
    printf("Time = %d:%d:%d\n", hours, minutes, seconds);

    return 0;
}