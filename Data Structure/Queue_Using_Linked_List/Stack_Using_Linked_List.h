
#define LINKED_STACK

#ifdef LINKED_STACK

/*********************************************************************************/
/****************************** Linked implementation*****************************/
/*********************************************************************************/

typedef struct stacknode{
	StackEntry entry;
	struct stacknode *next;
}StackNode;

typedef struct stack{
	StackNode *top;
}Stack;

#endif

/*********************************************************************************/
/*********************************************************************************/
/*********************************************************************************/

void	TestImplementation();
void	Push			  (StackEntry, Stack *);
void	Pop				  (StackEntry *, Stack *);
int		StackEmpty		  (Stack *);
int		StackFull		  (Stack *);
void	CreateStack		  (Stack *);
void	StackTop		  (StackEntry *, Stack *);
int		StackSize	  	  (Stack *);
void	ClearStack		  (Stack *);
void	TraverseStack	  (Stack *, void (*)(StackEntry));


