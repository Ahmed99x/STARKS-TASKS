#include <stdio.h>

void SumDiffProd(int num1, int num2, int *sum, int *diff, int *prod);

int main(){
	int num1, num2;
	int sum = 0, diff = 0, prod = 0;
	
	printf("Enter the number 1: ");
	scanf("%d", &num1);
	printf("\n");
	printf("Enter the number 2: ");
	scanf("%d", &num2);
	
	SumDiffProd(num1, num2, &sum, &diff, &prod);
	
	printf("Sum = %d, ", sum);
	printf("Difference = %d, ", diff);
	printf("Product = %d, ", prod);
	
	return 0;
}

void SumDiffProd(int num1, int num2, int *sum, int *diff, int *prod) {
	*sum  = num1 + num2;
	*diff = num1 - num2;
	*prod = num1 * num2;
}