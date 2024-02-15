#include <stdio.h>

int stringCount(char str[]) {
	int i = 0;
	
	for (i = 0; str[i] != '\0'; i++) {}
	
	return i;
}

int main() {
    char str1[1000];
	char str2[1000];

    printf("Enter a first string: ");
	gets(str1);
	
	printf("Enter a second string: ");
	gets(str2);
	
	//printf("%s", str1);
	int count1 = stringCount(str1);
	int count2 = stringCount(str2);
	
	if (count1 == count2) {
		printf("Two strings length are identical.");
	}
	else {
		printf("Two strings length are not identical.");
	}
	
    return 0;
}