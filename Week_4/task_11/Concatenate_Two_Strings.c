#include <stdio.h>

#define MAX_SIZE 100

void stringConcatenate(char str2[], char str1[]) {
    int destLength = 0;
	
    while (str2[destLength] != '\0') {
        destLength++;
    }
    
    int i = 0;
    while (str1[i] != '\0') {
        str2[destLength + i] = str1[i];
        i++;
    }
    str2[destLength + i] = '\0';
	
	printf("Concatenated string: %s\n", str2);
}

int main() {
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];
    
    printf("Enter the first string: ");
    gets(str1);
    
    printf("Enter the second string: ");
    gets(str2);
    
    stringConcatenate(str1, str2);
    
    return 0;
}