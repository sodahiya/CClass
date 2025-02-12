#include <stdio.h>
#include <stdlib.h>

struct node{
  node *prev;
  int data;
  node *next;
};

node* userInput(){
  printf("Enter the no of nodes ");
  int n;

  scanf("%d",&n);
  printf("Enter the head data");
  node *head = (struct node*)malloc(sizeof(struct node));
  scanf("%d",&head->data);
  head->prev = NULL;

  static node *prev = head;

  node *cur=NULL;
  for(int i=0;i<n-1;i++) {
    cur = (node*)malloc(sizeof(node));

    printf("Enter the data ");
    scanf("%d",&cur -> data);

    cur->prev = prev;
    prev -> next = cur;

    prev = cur;
  }

  cur->next = NULL;

  return head;
}

void printListForward(node *head) {
  node *cur = head;
  while(cur != NULL) {
    printf("%d  ",cur->data);
    cur = cur->next;
  }
}

void printListBackward(node *tail) {
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

void insertAtEnd(node * head) {
  node *tail = getTheLastNode(head);
  node *newNode = (node*)malloc(sizeof(node));

  printf("Enter the data ");
  scanf("%d",&newNode->data);

  tail->next = newNode;
  newNode->prev = tail;
  newNode->next = NULL;
}

void del(node* head,int index){
  node * cur  =head;
  for(int i=0;i<index;i++) {
    cur = cur->next;
  }

  cur->prev->next = cur->next;
  cur->next->prev = cur->prev;
  free(cur);
}

int main(){
  node *ListHead  = userInput();
  printListForward(ListHead);

  node *ListTail = getTheLastNode(ListHead);

  printf("\n");

  printListBackward(ListTail);

  insertAtEnd(ListHead);

  printListForward(ListHead);
  printf("\n");

  ListTail = getTheLastNode(ListHead);
  printListBackward(ListTail);
  printf("\n");


  del(ListHead,3);
  printListForward(ListHead);
  printf("\n");
  printListBackward(ListTail);

  return 0;
}