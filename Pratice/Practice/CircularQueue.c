#include <stdio.h>
struct curcularQueue{
  int head;
  int tail;
  int array[20];
};

void enqueue(struct curcularQueue* queue, int data) {
  if ((queue->tail + 1) % 20 == queue->head) {
    printf("Queue is full\n");
    return;
  }

  printf("tail = %d head = %d\n", queue->tail, queue->head);

  queue->array[queue->tail] = data;  // Insert data first
  queue->tail = (queue->tail + 1) % 20;  // Move tail forward
}

int dequeue(struct curcularQueue* queue){
  if ((queue->head + 1) % 20 == queue->tail) {
    printf("Queue is empty\n");
    return -1 ;
  }
  else {
    int temp = queue->array[queue->head];
    queue->head++;
    queue->head = queue->head % 20;
    return temp;
  }
}

void print(struct curcularQueue *q) {
  if (q->head == q->tail) {  // Queue is empty
    printf("Queue is empty\n");
    return;
  }

  int i = q->head;
  do {
    printf("%d ", q->array[i]);
    i = (i + 1) % 20;  // Move to the next index circularly
  } while (i != q->tail);  // Stop at tail

  printf("\n");
}

void main(){
  struct curcularQueue q;
  q.head = 19;
  q.tail = 19;

  for(int i = 0; i < 20; i++){
    enqueue(&q, i);
  }
  enqueue(&q, 20);
  print(&q);
}