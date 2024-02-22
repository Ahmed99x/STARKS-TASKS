#include <stdio.h>

void printArrayReverse(int *arr, int size) {
    int *ptr = arr + size - 1;

    for (int i = size; i > 0; i--) {
        printf("element - %d : %d\n", i, *ptr);
        ptr--;
    }
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
		printf("element - %d : ", (i+1));
        scanf("%d", &arr[i]);
    }
	printf("\n\n");

    printf("Array in reverse order: \n");
    printArrayReverse(arr, n);

    return 0;
}
