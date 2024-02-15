#include <stdio.h>


int main() {
    char str[1000], ch;

    printf("Enter a string: ");
	gets(str);
	
    printf("Enter the replacing character: ");
    scanf("%c", &ch);
	
	printf("Before replacing the string : %s\n\n", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = ch;
        }
    }

    printf("After replacing the string with %c : %s", ch, str);
	
    return 0;
}