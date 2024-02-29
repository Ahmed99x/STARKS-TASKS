#include "DataTypes.h"

struct Time {
    u16 hours;
    u16 minutes;
    u32 seconds;
};

struct Time getTime();

int calculateDifference(struct Time start, struct Time stop);

void printTimePeriod(struct Time t);