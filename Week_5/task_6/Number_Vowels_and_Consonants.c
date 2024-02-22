#include <stdio.h>
#include <ctype.h>

#define maxSize 100

void countVowelsAndCons(char *str, int *vowelCount, int *consonantCount);

int main() {
    char str[maxSize];
    int vowelCount, consonantCount;
    int *ptrVowels = &vowelCount, *ptrConsonants = &consonantCount;

    printf("Enter a string: ");
    gets(str);

    countVowelsAndCons(str, ptrVowels, ptrConsonants);

    printf("Number of vowels: %d     &     ", vowelCount);
    printf("Number of consonants: %d\n", consonantCount);

    return 0;
}

void countVowelsAndCons(char str[], int *vowelCount, int *consonantCount) {
    *vowelCount = 0;
    *consonantCount = 0;
	char *currentChar = str;
	
	for (int i = 0; str[i] != '\0'; i++) {
		if ((*currentChar >= 'a' && *currentChar <= 'z') || (*currentChar >= 'A' && *currentChar <= 'Z')) {
            if (*currentChar == 'a' || *currentChar == 'e' || *currentChar == 'i' || *currentChar == 'o' ||
                *currentChar == 'u' || *currentChar == 'A' || *currentChar == 'E' || *currentChar == 'I' ||
				*currentChar == 'O' || *currentChar == 'U') {
					
                (*vowelCount)++;
            } else {
                (*consonantCount)++;
            }
        }
		currentChar++;
	}
}