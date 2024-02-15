#include <stdio.h>

void evenAndodd(int arr[]);

int main() {
    int arr[10] = {0};
    
    printf("Enter ten numbers: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\n");
	
	printf("Entered numbers: ");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");
	
	evenAndodd(arr);
    
    return 0;
}

void evenAndodd(int arr[]) {
	int evenSum = 0;
	int oddProd = 1;
	
	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 == 0) {
			evenSum += arr[i];
		}
		else {
			oddProd *= arr[i];
		}
	}
	printf("The sum of even numbers is %d\n\n", evenSum);
	
	printf("The product of odd numbers is %d", oddProd);
}