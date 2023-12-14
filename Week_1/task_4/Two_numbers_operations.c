#include <stdio.h>

void main (void)
{
	printf("==============================================\n");
	printf("Make an Addition, Subtraction or Division on Two Numbers\n");
	printf("==============================================\n");
		
	float num1, num2;
	float sum = 0;
	float sub = 0;
	float div = 0;
		
	printf("Enter your the first number : ");
	scanf("%f" , &num1);
	printf("Enter your the second number : ");
	scanf("%f" , &num2);
	
	//Addition
	sum = num1 + num2;
	
	//Subtraction
	sub = num1 - num2;
	
	//Division
	div = num1 / num2;
	
	printf("==============================================\n");
	printf("The Addition of Two Numbers is %f\n" , sum);
	printf("==============================================\n");
	printf("The Subtraction of Two Numbers is %f\n" , sub);
	printf("==============================================\n");
	printf("The Division of Two Numbers is %f\n" , div);
	printf("==============================================\n");
}