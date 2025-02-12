#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *prev;
  int data;
  struct node *next;
};

node* userInput(){
  printf("Enter the no of nodes ");
  int n;

  scanf("%d",&n);
  printf("Enter the head data");
  struct node *head = (struct node*)malloc(sizeof(struct node));
  scanf("%d",&head->data);
  head->prev = NULL;

  static node *prev = head;

  node *cur=NULL;
  for(int i=0;i<n-1;i++) {
    cur = (struct node*)malloc(sizeof(struct node));

    printf("Enter the data ");
    scanf("%d",&cur -> data);

    cur->prev = prev;
    prev -> next = cur;

    prev = cur;
  }

  cur->next = NULL;

  return head;
}

void printListForward(struct node *head) {
  node *cur = head;
  while(cur != NULL) {
    printf("%d  ",cur->data);
    cur = cur->next;
  }
}

void printListBackward(struct node *tail) {
  node *cur = tail;
  while(cur != NULL) {
    printf("%d  ",cur->data);
    cur = cur->prev;
  }
}

node* getTheLastNode(node * head) {
  node *cur = head;
  while(cur->next != NULL) {
    cur = cur->next;
  }
  return cur;
}

int main(){
  node *ListHead  = userInput();
  printListForward(ListHead);

  node *ListTail = getTheLastNode(ListHead);

  printf("\n");

  printListBackward(ListTail);

  return 0;
}