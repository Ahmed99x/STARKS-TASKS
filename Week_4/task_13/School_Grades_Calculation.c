#include <stdio.h>
#define maxSize 30


void arrayAddition(int arr1[], int arr2[], int arr3[], int arr[]);
int findMinPos(int arr[]);
int findMaxPos(int arr[]);
int findAverage(int arr[]);
int findPassNum(int arr[]);


int main() {
	int arr1[10], arr2[10], arr3[10];
	int arr[maxSize];

	printf("Enter the first class grades: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr1[i]);
	}
	fflush(stdin);
	printf("\n");

	printf("Enter the second class grades: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr2[i]);
	}
	fflush(stdin);
	printf("\n");

	printf("Enter the third class grades: ");
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr3[i]);
	}
	fflush(stdin);
	printf("\n");

	printf("Entered first class: ");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", arr1[i]);
    }
    printf("\n\n");

	printf("Entered Second class: ");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", arr2[i]);
    }
    printf("\n\n");

	printf("Entered third class: ");
    for (int i = 0; i < 10; i++) {
        printf("%d  ", arr3[i]);
    }
    printf("\n\n");

	arrayAddition(arr1, arr2, arr3, arr); //array addition
	printf("Entered: "); // total array
    for (int i = 0; i < maxSize; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n\n");

	printf("The number of passed students is %d\n\n", findPassNum(arr));
	printf("The number of failed students is %d\n\n", (maxSize - findPassNum(arr)));

	printf("The highest grade is %d\n\n", arr[findMaxPos(arr)]);
	printf("The lowest  grade is %d\n\n", arr[findMinPos(arr)]);
	printf("The average grade is %d\n\n", findAverage(arr));

    return 0;
}
void arrayAddition(int arr1[], int arr2[], int arr3[], int arr[]) {
	for (int i = 0; i < maxSize; i++) {
		if (i < 10) {
			arr[i] = arr1[i];
		}
		else if (i >= 10 && i < 20) {
			arr[i] = arr2[i - 10];
		}
		else if (i >= 20) {
			arr[i] = arr3[i - 20];
		}
	}
}

int findMinPos(int arr[]) {
    int min = arr[0];
	int minPos = 0;

    for (int i = 1; i < maxSize; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minPos = i;
        }
    }
	return minPos;
}

int findMaxPos(int arr[]) {
	int max = arr[0];
	int maxPos = 0;

	for (int i = 1; i < maxSize; i++) {
        if (arr[i] > max) {
            max = arr[i];
            maxPos = i;
        }
    }
	return maxPos;
}

int findAverage(int arr[]) {
	int result = 0;
	int average;

	for (int i = 0; i < maxSize; i++) {
		result += arr[i];
	}
	average = result / maxSize;
	return average;
}

int findPassNum(int arr[]) {
	int count = 0;

	for (int i = 0; i < maxSize; i++) {
		if (arr[i] >= 50) {
			count++;
		}
	}
	return count;
}