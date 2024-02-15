#include <stdio.h>

void printArray(int arr[5][5]);
void calculateSums(int arr[5][5]);

int main() {
    int row1[5], row2[5], row3[5], row4[5], row5[5];
	int totalArray[5][5] = {0};
	
	printf("Enter the first row : \n");
	for (int i=0 ; i<5 ; i++) {
		printf("index %d : ", i);
		scanf("%d", &row1[i]);
	}
	fflush(stdin);
	
	printf("Enter the second row : \n");
	for (int i=0 ; i<5 ; i++) {
		printf("index %d : ", i);
		scanf("%d", &row2[i]);
	}
	fflush(stdin);
	
	printf("Enter the third row : \n");
	for (int i=0 ; i<5 ; i++) {
		printf("index %d : ", i);
		scanf("%d\n", &row3[i]);
	}
	fflush(stdin);
	
	printf("Enter the forth row : \n");
	for (int i=0 ; i<5 ; i++) {
		printf("index %d : ", i);
		scanf("%d\n", &row4[i]);
	}
	fflush(stdin);
	
	printf("Enter the fifth row : \n");
	for (int i=0 ; i<5 ; i++) {
		printf("index %d : ", i);
		scanf("%d\n", &row5[i]);
	}
	
	for (int i=0 ; i<5 ; i++) {
		for (int j=0 ; j<5 ; j++) {
			switch (i) {
				case 0: totalArray[i][j] = row1[j]; break;
				case 1: totalArray[i][j] = row2[j]; break;
				case 2: totalArray[i][j] = row3[j]; break;
				case 3: totalArray[i][j] = row4[j]; break;
				case 4: totalArray[i][j] = row5[j]; break;
			}
		}
	}
	printf("\n\n");
	printf("Entered Array is :\n");
	printArray(totalArray);
	printf("\n\n");
	
	calculateSums(totalArray);
	
	return 0;
}

void printArray(int arr[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}

void calculateSums(int arr[5][5]) {
	
	int rowSum[5] = {0}, columnSum[5] = {0};
	
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            rowSum[i] += arr[i][j];
			columnSum[i] += arr[j][i];
        }
    }
	
	printf("The rows sum is :   ");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", rowSum[i]);
	}
	printf("\n\n");
	
	printf("The columns sum is :");
	for (int i = 0; i < 5; i++) {
		printf("%d\t", columnSum[i]);
	}
}