#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"


#ifdef LINKED_STACK

/*********************************************************************************/
/****************************** Linked implementation************************/
/*********************************************************************************/

/* CreateStack: initialize the stack to be empty.
   Pre: None.
   Post: The stack has been initialized to be empty.
*/
void CreateQueue(Queue *pq){
   pq->front=NULL;
   pq->rear=NULL;
   pq->size=0;
}

/* Append: push an element into the queue.
   Special case is "The queue is empty".
*/
void Append(QueueEntry e, Queue* pq){
  QueueNode*pn=(QueueNode*)malloc(sizeof(QueueNode));
  pn->next=NULL;
  pn->entry=e; 			
  if (!pq->rear)
    pq->front=pn; 
  else
    pq->rear->next=pn;//run time error for empty queue
  pq->rear=pn;
  pq->size++;
}

/* Serve: pop an element from the queue.
   Special case is "There is one element in the queue".
*/
void Serve(QueueEntry *pe, Queue* pq){
	QueueNode *pn=pq->front;
	*pe=pn->entry;
	pq->front=pn->next;
	free(pn);
	if (!pq->front)
		pq->rear=NULL;
	pq->size--;
}

/* StackFull: returns non-zero if the stack is full.
   Pre: The stack exists and it has been initialized.
   Post: Return non-zero if the stack is full; return zero, otherwise.
 */
int QueueFull(Queue* pq){
	return 0;
}

// StackEmpty: returns non-zero if the stack is empty.
int QueueEmpty(Queue* pq){
	return !pq->front;
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
	while(pq->front){
		pq->rear=pq->front->next;
		free(pq->front);
		pq->front=pq->rear;
	}
	pq->size  = 0; 
}/*

/*
Pre:   The stack has been created.
Post:  Visit Each element in the stack from the top to the bottom.
*/
void TraverseQueue(Queue* pq, void(*pf)(QueueEntry)){
	for(QueueNode *pn=pq->front; pn; pn=pn->next)
		(*pf)(pn->entry);
}                                           /* void TraverseStack */

#endif
