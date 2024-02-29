#include <stdio.h>
#include "DataTypes.h"
#include "TimePeriodFunc.h"

int main() {
    struct Time startTime, stopTime;
    
    printf("Enter start time:\n");
    startTime = getTime(); // return a struct
    
    printf("Enter stop time:\n");
    stopTime = getTime(); // return a struct
    
    int difference = calculateDifference(startTime, stopTime); // send two structs
    
    printf("Difference between the time periods: ");
	printTimePeriod(stopTime);
    printf(" - ");
    printTimePeriod(startTime);
    printf(" = %02d:%02d:%02d\n", difference / 3600, (difference % 3600) / 60, difference % 60);
    
    return 0;
}