#include <stdio.h>

void main (void)
{
	int N;
    printf("Enter the number of lines: ");
    scanf("%d", &N);
	
	int counter = 1;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", counter);
            counter++;
        }
        printf("PUM\n");
        counter++;
    }
	
}