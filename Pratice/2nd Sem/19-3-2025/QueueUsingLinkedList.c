#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct queue{
  struct node *head, *tail;
};

void initQueue(struct queue *q){
    q->head = (struct node*)malloc(sizeof(struct node));
    q->head->data = 0;
    q->tail = NULL;
    q->head->next = NULL;
}

void enqueue(struct queue *q, int value) {
    struct node *newNode = (struct node*)malloc(sizeof(struct node)); // Allocate memory for head
    newNode->data = value;
    struct node *curr = q->head;

    while(curr->next != NULL){
          curr = curr->next;
    }

    curr->next = newNode;
    newNode->next = NULL;

    q->tail = newNode;
}

int dequeue(struct queue *q) {
    struct node *temp = q->head;
    q->head =q->head->next;

    free(temp);
    return q->head->data;
}

int size(struct queue *q) {
    struct node *curr = q->head->next;
    int count = 0;
    while(curr != NULL) {
        count++;
        curr = curr->next;
    }
    return count;
}

int peek(struct queue *q) {
    struct node *curr = q->head->next;
    return curr->data;
}

void print(struct queue *q){
    printf("Queue is: ");
    struct node *curr = q->head->next;
    while(curr != NULL){
        printf("%d ",curr->data);
        curr = curr->next;
    }
    printf("\n");
}

void main(){
    struct queue q;
    initQueue(&q);

    enqueue(&q, 10);
    print(&q);
    enqueue(&q, 20);
    print(&q);

    enqueue(&q, 30);
    print(&q);
    enqueue(&q, 40);
    print(&q);

    printf("Dequeued : %d\n",dequeue(&q));
    print(&q);

    printf("Size : %d\n",size(&q));

    printf("Peek : %d\n",peek(&q));

}
