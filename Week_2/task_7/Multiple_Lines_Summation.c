#include <stdio.h>

int main() {
    int N, M;

    while (1) {
        scanf("%d %d", &N, &M);

        // Check for termination condition
        if (N <= 0 || M <= 0) {
            break;
        }

        int start = N < M ? N : M; // Find the smaller number
        int end = N > M ? N : M;   // Find the larger number
        int sum = 0;

        printf("==============================================\n");
        for (int i = start; i <= end; i++) {
            printf("%d ", i);
            sum += i;
        }
		
        printf("sum =%d\n", sum);
		printf("==============================================\n");
    }

    return 0;
}