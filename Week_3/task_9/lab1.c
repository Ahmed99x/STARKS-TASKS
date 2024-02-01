#include <stdio.h>

static int callCount = 0;

void TwoNumsAverage(unsigned int num1 , unsigned int num2){
	float average=0;
	average = (num1 + num2) / 2;
	printf("The average of two numbers is %.4f\n", average);
	callCount++;
}

int getCallCount() {
    return callCount;
}