#include <stdio.h>
#include "The Reverse of Number.h"

int main() {
    unsigned int num;

    printf("Enter an positive integer: ");
    scanf("%d", &num);
    printf("Reversed Number = %d", ReversedNumber(num));
    return 0;
}