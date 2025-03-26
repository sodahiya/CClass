#include <stdio.h>
struct queue{
  int head;
  int tail;
  int arr[20];
};

void enqueue(struct queue *q, int value){
  if(q->tail +1> 20){
    printf("Queue is full\n");
  }
  q->arr[q->tail+1] = value;
  q->tail++;
}

int dequeue(struct queue *q){
  if(q->head = q->tail){
    printf("Queue is empty\n");
  }
  q->head++;
}

int peek( struct queue *q){
  temp = q->arr[q->head];
  return temp;
}

void print(struct queue *q){
  for(int i=q->head+1;i<q->tail+1;i++){
    printf("%d ",q->arr[i]);
  }
  printf("\n");
}

void main(){
  struct queue q;
  q.head = -1;
  q.tail = -1;

  enqueue(&q,10);
  print(&q);
  enqueue(&q,20);
  enqueue(&q,30);
  enqueue(&q,40);
  print(&q);

  dequeue(&q);
  print(&q);
}