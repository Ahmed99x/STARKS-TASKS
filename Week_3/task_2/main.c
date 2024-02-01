#include <stdio.h>
#include "Fibonacci Series.h"

int main() {
    unsigned int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
	FibonacciSeries(n);
    return 0;
}