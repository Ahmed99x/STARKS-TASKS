#include <stdio.h>

void FibonacciSeries(unsigned int n){
	int result, a, b;
	a = 0;
	b = 1;
	for (int i=1; i<=n ; i++){
		printf("%d ", a);
		result = a + b;
		a = b;
		b = result;
	}
}