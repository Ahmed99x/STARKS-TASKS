#include <stdio.h>

#define ARRAY_SUM(arr, size) \
    ({ \
        int sum = 0; \
        for (int i = 0; i < size; i++) { \
            sum += arr[i]; \
        } \
        sum; \
    })

int main() {
	int n;
	
	printf("=============================\n");
	printf("Enter the n of Array: ");
	scanf("%d", &n);
	printf("=============================\n");
	
	int numbers[n];
	
	for (int i = 0; i < n; i++) {
		printf("Enter the %d number: ", i + 1);
		scanf("%d", &numbers[i]);
    }
    
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int sum = ARRAY_SUM(numbers, size);
	
	printf("=============================\n");
    printf("Sum of the array: %d\n", sum);
	printf("=============================\n");

    return 0;
}