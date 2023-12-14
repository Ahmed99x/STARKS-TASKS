#include <stdio.h>

void main (void)
{
	float num1, num2;
		
	printf("Enter your the first number : ");
	scanf("%f" , &num1);
	printf("Enter your the second number : ");
	scanf("%f" , &num2);
	
	printf("==============================================\n");
	printf("Before Swaping, The first number is %.2f & second number is %.2f\n" , num1 , num2);
	printf("==============================================\n");
	
	//Swaping
	float x = num1;
	num1 = num2;
	num2 = x;
	
	printf("==============================================\n");
	printf("After Swaping, The first number is %.2f & second number is %.2f\n" , num1 , num2);
	printf("==============================================\n");
}