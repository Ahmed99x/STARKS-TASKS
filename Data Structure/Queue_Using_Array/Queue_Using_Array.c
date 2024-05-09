#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"


#ifdef ARRAY_STACK

/*********************************************************************************/
/****************************** Array-based implementation************************/
/*********************************************************************************/

/* CreateStack: initialize the stack to be empty.
   Pre: None.
   Post: The stack has been initialized to be empty.
*/
void CreateQueue(Queue *pq){
	pq->front= 0;
	pq->rear = -1;
	pq->size = 0; 
}

/* Append: push an element into the queue.
   Special case is "The queue is empty".
*/
void Append(QueueEntry e, Queue* pq){
  pq->rear = (pq->rear + 1) % MAXQUEUE;
  pq->entry[pq->rear] = e;
  pq->size++;
}

/* Serve: pop an element from the queue.
   Special case is "There is one element in the queue".
*/
void Serve(QueueEntry *pe, Queue* pq){
  *pe = pq->entry[pq->front];
  pq->front = (pq->front + 1) % MAXQUEUE;
  pq->size--;
}

/* StackFull: returns non-zero if the stack is full.
   Pre: The stack exists and it has been initialized.
   Post: Return non-zero if the stack is full; return zero, otherwise.
 */
int QueueFull(Queue* pq){
	return (pq->size == MAXQUEUE);
}

// StackEmpty: returns non-zero if the stack is empty.
int QueueEmpty(Queue* pq){
	return !pq->size;
}

/*
Pre:  The stack has been created.
Post: The function returns the number of entries in stack.
*/
int QueueSize(Queue* pq){
	return pq->size;
}

/*
Pre:  The stack has been created.
Post: Stack becoems empty
*/
void ClearQueue(Queue* pq){
	pq->front = 0;
	pq->rear  = -1;
	pq->size  = 0; 
}//same as CreateQueue. No nodes to free.

/*
Pre:   The stack has been created.
Post:  Visit Each element in the stack from the top to the bottom.
*/
void TraverseQueue(Queue* pq, void (*pf)(QueueEntry)){
	int pos, s;
	for(pos=pq->front, s=0; s<pq->size; s++){
		(*pf)(pq->entry[pos]);
		pos=(pos+1)%MAXQUEUE;
	}
}

#endif
