#include <stdio.h>

int checkDuplicate(int num);

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (checkDuplicate(num)) {
        printf("The number contains duplicate digits.\n");
    } else {
        printf("The number does not contain duplicate digits.\n");
    }
    
    return 0;
}

int checkDuplicate(int num) {
    int digitCount[10] = {0};
    
    while (num > 0) {
        int digit = num % 10;
        digitCount[digit]++; // Increment the count of the digit
        num /= 10;
    }
    
    for (int i = 0; i < 10; i++) {
        if (digitCount[i] > 1) {
            return 1;
        }
    }
    
    return 0;
}