#include <stdio.h>

#define MAX_SIZE 100

void printArray(int arr1[], int arr2[], int size) {
	char state1;
	char state2 = 1;
	
	printf("Entered numbers: ");
	for (int i = 0; i < size; i++) {
        printf("%d ", arr1[i]);
    }
	printf("\n");
	
    for (int i = 0; i < size; i++) {
		state1 = 1;
        for (int j = 0; j < size; j++) {
			if (i == j) {
				continue;
			}
			else if (arr1[i] == arr2[j]) {
				state1 = 0;
			}
		}
		if (state1) {
			printf("The unique numbers is : %d ", arr1[i]);
			state2 = 0;
		}
    }
	if (state2) {
		printf("\n");
		printf("No unique number!.");
	}
}

int main() {
    int arr1[MAX_SIZE];
	int arr2[MAX_SIZE];
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the numbers of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }
	
	for  (int i = 0; i < size; i++) {  //array copy
		arr2[i] = arr1[i];
	}
	
	/*for (int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }*/
	printf("\n");

    printArray(arr1, arr2, size);

    return 0;
}