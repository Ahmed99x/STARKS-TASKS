
#define ARRAY_QUEUE

#ifdef ARRAY_STACK

/*********************************************************************************/
/****************************** Array-based implementation************************/
/*********************************************************************************/

typedef struct queue{
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXQUEUE];
} Stack;

#endif

/*********************************************************************************/
/*********************************************************************************/
/*********************************************************************************/

void    CreateQueue      (Queue *pq);
void    Append           (QueueEntry e, Queue* pq);
void    Serve            (QueueEntry *pe, Queue* pq);
int     QueueFull        (Queue* pq);
int     QueueEmpty       (Queue* pq);
int     QueueSize        (Queue* pq);
void    ClearQueue       (Queue* pq);
void    TraverseQueue    (Queue* pq, void(*pf)(QueueEntry));

