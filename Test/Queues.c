 #include <stdio.h>
 #define MAX   
 10typedef struct queue
 {
 int head;  
 int tail;  
 int ar[MAX];
 }
 QUEUE;
 int queue_empty( QUEUE);
 void enqueue( QUEUE *, int);
 int dequeue( QUEUE *);
 int main(void)
 {
 QUEUE Q;   
 // initialize the front and rear.   
 Q.head  = 0; 
 Q.tail  = 0;
 enqueue( &Q, 10);
 enqueue( &Q, 30); 
 enqueue( &Q, 20);
 enqueue( &Q, 50);   
 dequeue( &Q); 
 dequeue( &Q); 
 dequeue( &Q); 
 dequeue( &Q);  
 dequeue( &Q);}
 
 /*queue_empty( QUEUE)    This function check whether the queue is empty.*/
 
 int queue_empty( QUEUE q)
 {
 if( q.head == q.tail) 
 
 return 1;   
 return 0;}
 /*    enqueue( QUEUE *, int)    insert a data into the queue*/
 void enqueue( QUEUE *q, int data)
 {
 q->ar[q->head++]    = data; 
 printf("ENQUEUE : %d\n", data);
 q->head = q->head % MAX;}
 /*    dequeue( QUEUE *)    remove a data from the queue and    return the data.*/
 
 int dequeue( QUEUE *q)
 {
 int data;  
 if( queue_empty( *q))  
 {
 printf("the queue is empty!\n");  
 return -1;  
 }
 data    = q->ar[q->tail++];   
 printf("DEQUEUE : %d\n", data);   
 q->tail = q->tail % MAX;  
 return data;
 }
