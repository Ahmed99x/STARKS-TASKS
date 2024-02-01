#include <stdio.h>

void PrimeNumberCheck(unsigned int number){
	int prime = 1; 
    for (int i = 2; i <= number / 2; i++) { 
	  
		if (number % i == 0) { 
            prime = 0; 
            break; 
        }
    }
	
    if (prime && number != 0 && number != 1) { 
        printf("The number %d is a Prime Number\n", number); 
    } 
    else { 
        printf("The number %d is not a Prime Number\n", number); 
    } 
}