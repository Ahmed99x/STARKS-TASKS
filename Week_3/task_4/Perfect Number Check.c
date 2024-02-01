#include <stdio.h>

void PerfectNumberCheck(unsigned int number){
	unsigned int remainder, sum=0;
	for (int i=1; i<number ; i++){
		remainder = number % i;
		if (remainder == 0){
			sum += i;
		}
	}
	if (sum == number){
		printf("%d is a perfect number.\n", number);
	}
	else{
		printf("%d is not a perfect number.\n", number);
	}
}