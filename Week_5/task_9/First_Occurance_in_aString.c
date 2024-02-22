#include <stdio.h>
#include <string.h>

char* findSubstring(const char* str, const char* sub);

int main() {
    char str[100];
    char sub[100];
    char* result;

    printf("Enter the source string: ");
    gets(str);

    printf("Enter the search string: ");
    gets(sub);

    // Remove newline characters from fgets input
    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';

    result = findSubstring(str, sub);

    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - str);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}

char* findSubstring(const char* str, const char* sub) {
    const char* strPtr = str;
    const char* subPtr = sub;

    while (*strPtr != '\0') {
        if (*strPtr == *subPtr) {
            const char* tempPtr = strPtr;
            while (*tempPtr == *subPtr && *tempPtr != '\0' && *subPtr != '\0') {
                tempPtr++;
                subPtr++;
            }

            if (*subPtr == '\0') {
                return (char*)strPtr;
            }
            subPtr = sub;
        }
        strPtr++;
    }

    return NULL;
}