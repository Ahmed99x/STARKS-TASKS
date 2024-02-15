#include <stdio.h>
#define MAX_SIZE 10

void readMatrix(int matrix[][MAX_SIZE], int rows, int cols);
void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols);
void matrixMultiplication(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2);


int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int rows1, cols1, rows2, cols2;
    
    printf("Enter the number of rows and columns for the first matrix:\n");
    scanf("%d %d", &rows1, &cols1);
    
    printf("Enter the number of rows and columns for the second matrix:\n");
    scanf("%d %d", &rows2, &cols2);
    
    if (cols1 != rows2) {
        printf("Matrix multiplication is not possible!\n");
        return 0;
    }
    
	printf("Enter the first matrix :\n");
    readMatrix(mat1, rows1, cols1);
	printf("\nFirst Matrix :\n");
	displayMatrix(mat1, rows1, cols1);
	printf("\n");
	
	printf("Enter the second matrix :\n");
    readMatrix(mat2, rows2, cols2);
	printf("\nSecond Matrix :\n");
	displayMatrix(mat2, rows2, cols2);
	printf("\n\n");
    
    matrixMultiplication(mat1, mat2, result, rows1, cols1, cols2);
    
    printf("Result Matrix:\n");
    displayMatrix(result, rows1, cols2);
    
    return 0;
}

void readMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int matrix[][MAX_SIZE], int rows, int cols) {
    printf("Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void matrixMultiplication(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows1, int cols1, int cols2) {
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}