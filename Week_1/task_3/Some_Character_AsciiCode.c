#include <stdio.h>

void main (void)
{
	char chara1, chara2, chara3;
	printf("Enter the first character value : ");
	scanf("%c" , &chara1);
	fflush(stdin);
	printf("Enter the second character value : ");
	scanf("%c" , &chara2);
	fflush(stdin);
	printf("Enter the third character value : ");
	scanf("%c" , &chara3);
	
	printf("==============================================\n");
	printf("The First Character is %c and its Ascii Code is %d\n", chara1, chara1);
	printf("==============================================\n");
	printf("The Second Character is %c and its Ascii Code is %d\n", chara2, chara2);
	printf("==============================================\n");
	printf("The Third Character is %c and its Ascii Code is %d\n", chara3, chara3);
	printf("==============================================\n");
}