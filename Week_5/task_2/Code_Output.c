#include <stdio.h>
#include <stdlib.h>

int fun(int *nl , int *n2){
	(*nl)++;
	(*n2) += 20;
	printf(" Inside function *nl = %d, *n2 = %d\n", *nl, *n2);
}

int main(){
	int a = 5;
	int b = 6;
	int *pl = &a;
	int *p2 = &b;

	printf(" Before calling the function, a = %d and b = %d\n", a, b); 
	fun(&a,&b);
	printf(" After calling the function, a = %d and b = %d\n", a, b);
	
	return 0;
}