#include <stdio.h>
#include <stdlib.h>

struct  Stack {
    int top;
    int arr[20];
};

void push(struct Stack *stack, int value) {
    if (stack->top >= 20 - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

struct queue {
    struct Stack forwardStack;
    struct Stack reverseStack;
};

void stabilize(struct queue *q) {
    while (q->forwardStack.top != -1) {
        push(&q->reverseStack, pop(&q->forwardStack));
    }
}

void initializeQueue(struct queue *q) {
    q->forwardStack.top = -1;
    q->reverseStack.top = -1;
}

void enqueue(struct queue *q, int value) {
    push(&q->forwardStack, value);
}

int dequeue(struct queue *q) {
    if (q->forwardStack.top == -1) {
        printf("Queue Underflow\n");
    }
    return pop(&q->reverseStack);
}



void print(struct queue *q) {
    printf("Queue : ");
    stabilize(q);
    while (q->reverseStack.top != -1) {
        printf("%d ", pop(&q->reverseStack));
    }
    printf("\n");
}

int main() {
    struct queue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    print(&q);

    return 0;
}
