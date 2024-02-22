#include <stdio.h>

void calculateFactorial(int num, unsigned long *result);

int main() {
    int number;
    unsigned long factorial;
    unsigned long *ptr = &factorial;

    printf("Enter a number: ");
    scanf("%d", &number);

    calculateFactorial(number, ptr);

    printf("Factorial of %d = %lu\n", number, factorial);

    return 0;
}

void calculateFactorial(int num, unsigned long *result) {
    *result = 1;

    for (int i = 1; i <= num; i++) {
        *result *= i;
    }
}