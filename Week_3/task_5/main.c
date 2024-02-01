#include <stdio.h>
#include "Prime Number Check.h"

int main() {
    unsigned int number;

    printf("Enter an positive integer: ");
    scanf("%d", &number);
	PrimeNumberCheck(number);
	
    return 0;
}