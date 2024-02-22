#include <stdio.h>

#define maxSize 25

void putElements(char *ptr);
void printFunc(char arr[]);

int main(){
	char alpha[maxSize];
	
	putElements(alpha);
	
	printFunc(alpha);
	
	return 0;
}

void putElements(char *ptr){
	for (int i = 0; i <= maxSize; i++){
		*ptr = 'A' + i;
		*ptr++;
	} 
}

void printFunc(char arr[]){
	for (int i = 0; i <= maxSize; i++){
		printf("%c  ", arr[i]);
	}
}