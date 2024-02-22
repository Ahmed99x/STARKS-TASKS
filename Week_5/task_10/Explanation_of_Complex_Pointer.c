
int **(*(*ptr){int x)();

/* ptr is a pointer to a function that takes an int argument and returns a pointer
 to a function that returns an int pointer. */



void *(*(*N[3])())();

/* N is an array of 3 pointers to functions that take no inputs and return a pointer
 to a function that returns a void pointer. */