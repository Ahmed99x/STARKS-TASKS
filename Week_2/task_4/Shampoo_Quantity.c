#include <stdio.h>

void main (void)
{
	int V, A, B, C;
    printf("Enter the total, the father, the mother and Takahashi values : ");
    scanf("%d %d %d %d", &V, &A, &B, &C);

    while (1) {
        // The father tries to use the shampoo
        if (V < A) {
			printf("==============================================\n");
            printf("F\n");
            break;
        }
        V -= A;

        // The mother tries to use the shampoo
        if (V < B) {
			printf("==============================================\n");
            printf("M\n");
            break;
        }
        V -= B;

        // Takahashi tries to use the shampoo
        if (V < C) {
			printf("==============================================\n");
            printf("T\n");
            break;
        }
        V -= C;
    }
	
}