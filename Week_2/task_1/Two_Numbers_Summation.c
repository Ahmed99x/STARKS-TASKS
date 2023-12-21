#include <stdio.h>

float num1 = 0;
float num2 = 0;
float sum  = 0;

void main (void)
{
	while(1)
	{
		printf("Enter the first number : ");
		scanf("%f" , &num1);
		fflush(stdin);
		printf("==============================================\n");
		printf("Enter the second number : ");
		scanf("%f" , &num2);
		fflush(stdin);
		printf("==============================================\n");
		
		sum = num1 + num2;
		
		printf("The summation of two numbers is %.2f\n" , sum);
		printf("==============================================\n");
	}
	
}