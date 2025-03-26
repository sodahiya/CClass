#include <stdio.h>
#include <stdlib.h>
struct stack{
    int valuses[10];
    int top;
};

struct node {
    int data;
    struct node *next;
};

struct node* createLinkedList(){
    struct node *head = (struct node*)malloc(sizeof(struct node)); // Allocate memory for head

    head -> data = 5;
    struct node *prev = head;
    for(int i = 2;i<6;i++){
        struct node *new = (struct node*)malloc(sizeof(struct node)); // Allocate memory for head
        prev -> next = new;
        new->data = i* 5;
        prev = new;
    }

    prev->next = NULL;

    return head;
}

void printLinkedList(struct node *head) {
    struct node *current = head;
    printf("Linked List: ");
    while (current != NULL) {
      printf("%d ", current->data);
      current = current->next;  // Move to the next node
    }
    printf("\n");
  }



void printStack(struct stack s) {
    printf("Stack      : ");
    for (int i =0;i<s.top;i++) {
        printf("%d ",s.valuses[i]);
    }
    printf("\n");
}

struct stack createStack(){
    struct stack s;
    s.top = 0;
    return s;
}


struct stack push(struct stack s,int value){
    s.valuses[s.top] = value;
    s.top +=1;
    return s;
}

struct stack pop(struct stack s){
    s.valuses[s.top] = 0;
    s.top -=1;
    return s;
}

struct stack fromLinkedList(struct stack s,struct node* head) {
    struct node *cur = head;
    while ( cur != NULL){
        s = push(s,cur->data);
        cur = cur->next;
    }
    return s;
}

void main(){
    struct stack s = createStack();
    
    struct node *head = createLinkedList();
    printLinkedList(head);

    s = fromLinkedList(s,head);
    
    printStack(s);
}