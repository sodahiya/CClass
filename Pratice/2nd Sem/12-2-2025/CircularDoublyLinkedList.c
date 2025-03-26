#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
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
    head->prev = NULL;

    struct node *prev = head;

    struct node *cur=NULL;
    for(int i=0;i<n-1;i++) {
        cur = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data ");
        scanf("%d",&cur -> data);

        cur->prev = prev;
        prev -> next = cur;

        prev = cur;
    }

    cur->next = head;
    head->prev = cur;

    return head;
}
void printListForward(struct node *head) {
    struct node *cur = head;
    while(cur->next != head) {
        printf("%d  ",cur->data);
        cur = cur->next;
    }
    printf("%d  ",cur->data);
}

int main(){
  struct node *head = userInput();
  printListForward(head);
}

