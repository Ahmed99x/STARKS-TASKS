#include <stdio.h>
#include "The Student's Average Function Return.h"

int main() {
    unsigned int average;

    printf("Enter the student's average: ");
    scanf("%d", &average);
	printf("The function return is %d", QualityPoints(average));
	
    return 0;
}