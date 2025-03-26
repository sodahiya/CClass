#include <stdio.h>
#include <stdlib.h>

struct node{
  int data;
  struct node *next;
};

struct node* userInput(){
  printf("Enter the no of nodes ");
  int n;

  scanf("%d",&n);
  printf("Enter the head data");
  struct node *head = (struct node*)malloc(sizeof(struct node));
  scanf("%d",&head->data);

  struct node *prev = head;

  struct node *cur=NULL;
  for(int i=0;i<n-1;i++) {
    cur = (struct node*)malloc(sizeof(struct node));

    printf("Enter the data ");
    scanf("%d",&cur -> data);

    prev -> next = cur;

    prev = cur;
  }

  cur->next = head;

  return head;
}

void printList(struct node *head) {
  struct node *cur = head;
  while (cur->next != head) {
    printf("%d ", cur->data);
    cur = cur->next;  // Move to the next node
  }
  printf("%d ", cur->data);
  printf("\n");
}

int main(){
   struct node* ListHead = userInput();
   printList(ListHead);
}