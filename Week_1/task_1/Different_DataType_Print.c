#include <stdio.h>

void main (void)
{
	//Print an integer value.
	int x;
	char y=0;
	float z;
	
	printf("Enter an integer value : ");
	scanf("%d" , &x);
	fflush(stdin);
	printf("Enter a character value : ");
	scanf("%c" , &y);
	fflush(stdin);
	printf("Enter a float value : ");
	scanf("%f" , &z);
	
	printf("==============================================\n");
	printf("The integer value is %d\n" , x);
	printf("==============================================\n");
	printf("The character value is %c\n" , y);
	printf("==============================================\n");
	printf("The float value is %.3f\n" , z);
	printf("==============================================\n");
}