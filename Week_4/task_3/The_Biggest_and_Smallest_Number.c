#include <stdio.h>

int findMinPos(int arr[], int size);
int findMaxPos(int arr[], int size);

int main() {
    int n;
    
    printf("Enter n numbers: ");
    scanf("%d", &n);
	
	int arr[n];
	
	printf("Enter the %d numbers: ", n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\n");
	
	printf("Entered numbers: ");
    for (int i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");
    
	int minPos = findMinPos(arr, n);
	int maxPos = findMaxPos(arr, n);
	
    printf("Smallest number: %d\n", arr[minPos]);
    printf("Position of smallest number: %d\n", minPos + 1);
	
	printf("\n\n");
    
    printf("Largest number: %d\n", arr[maxPos]);
    printf("Position of largest number: %d\n", maxPos + 1);
	
	
    return 0;
}

int findMinPos(int arr[], int size) {
    int min = arr[0];
	int minPos = 0;
    
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minPos = i;
        }
    }
	return minPos;
}

int findMaxPos(int arr[], int size) {
	int max = arr[0];
	int maxPos = 0;
	
	for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxPos = i;
        }
    }
	return maxPos;
}