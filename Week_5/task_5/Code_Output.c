#include <stdio.h>
#include <stdlib.h>


int main() {
	int x = 1000;
	char *ptr = &x;
	ptr = ptr + 1;
	printf("%d    %d", x, *ptr );
}