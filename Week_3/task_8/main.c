#include <stdio.h>
#include "The Smallest of Three Numbers.h"

int main() {
    float num1, num2, num3;

    printf("Enter the three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
	printf("The smallest number is %f", SmallestNumber(num1, num2, num3));
	
    return 0;
}