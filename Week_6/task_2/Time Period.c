#include <stdio.h>
#include "TimePeriodFunc.h"

struct Time getTime() {
    struct Time t;
    
    printf("Enter time (hours minutes seconds): ");
    scanf("%u %u %u", &t.hours, &t.minutes, &t.seconds);
    
    return t;
}

int calculateDifference(struct Time start, struct Time stop) {
    int startTimeInSeconds = start.hours * 3600 + start.minutes * 60 + start.seconds;
    int stopTimeInSeconds = stop.hours * 3600 + stop.minutes * 60 + stop.seconds;
    
    return stopTimeInSeconds - startTimeInSeconds;
}

void printTimePeriod(struct Time t) {
    printf("%02d:%02d:%02d", t.hours, t.minutes, t.seconds);
}