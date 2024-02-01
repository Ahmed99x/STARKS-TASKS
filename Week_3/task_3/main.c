#include <stdio.h>
#include "Binary to Decimal.h"

int main() {
    unsigned int num, binary;

    printf("Enter an binary number: ");
    scanf("%d", &binary);
	num = binary;
    printf("Decimal eqivalent to the binary %d is %d", num, BinaryToDecimal(binary));
    return 0;
}