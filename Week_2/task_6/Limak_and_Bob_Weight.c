#include <stdio.h>

void main (void)
{
	int a, b;
     printf("Enter the weight of Limak :");
    scanf(" %d", &a);
    printf("Enter the weight of Bob :");
    scanf(" %d", &b);

    int years = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    printf("==============================================\n");
    printf("%d\n", years);
	printf("==============================================\n");
	
}