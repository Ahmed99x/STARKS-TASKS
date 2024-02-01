#include <stdio.h>
#include "main.h"
#include "lab1.h"

int main() {
    unsigned int num1, num2, iteration;
	printf("Enter the number of iterations: ");
    scanf("%u", &iteration);
	
	for (int i=1 ; i<=iteration ; i++){
		printf("Enter the two numbers: ");
		scanf("%u %u", &num1, &num2);
		TwoNumsAverage(num1 , num2);
	}
	
	printf("Number of average function calls: %d\n", getCallCount());
	
    return 0;
}