#include <stdio.h>

#define CALCULATOR(operation, a, b) (operation == '+') ? (a + b) : \
                                    (operation == '-') ? (a - b) : \
                                    (operation == '*') ? (a * b) : \
                                    (operation == '/') ? (a / b) : \
                                    0

int main() {
    int num1, num2;
    char operator, status = 1;
	
	while (status) {
		printf("=============================\n");
		printf("Enter the first number: ");
		scanf("%d", &num1);
		printf("=============================\n");

		printf("Enter the operator (+, -, *, /): ");
		scanf(" %c", &operator);
		printf("=============================\n");

		printf("Enter the second number: ");
		scanf("%d", &num2);
		printf("=============================\n");

		int result = CALCULATOR(operator, num1, num2);

		printf("Result: %d\n", result);
		printf("=============================\n");
		
		printf("Press 1 if you need more and 0 if you don't... ");
		scanf("%d", &status);
		
		if (status) {} else status = 0; 
	}

    return 0;
}