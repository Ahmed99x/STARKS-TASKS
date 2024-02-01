#include <stdio.h>
#include "Perfect Number Check.h"

int main() {
    unsigned int number;

    printf("Enter an positive integer: ");
    scanf("%d", &number);
	PerfectNumberCheck(number);
	
	/*for (int i=1; i<=100; i++){
		PerfectNumberCheck(i);
	}*/
    return 0;
}