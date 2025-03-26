#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    int row;
    int col;
    struct node *next;
};

struct node* userInput(){
    printf("Enter the size of matrix\n");
    int n,m,no;

    scanf("%dx%d",&n,&m);

    printf("Enter the no of non zero elements of matrix\n");
    scanf("%d",&no);


    struct node * head = (struct node*)malloc(sizeof(struct node));

    head->row=n;
    head->col=m;

    struct node *prev = head;

    struct node *cur=NULL;
    for(int i=0;i<no;i++) {
        cur = (struct node*)malloc(sizeof(struct node));

        printf("Enter the data\n");
        scanf("%d,%n,%m",&cur -> data);
        printf("Enter the row\n");
        scanf("%d",&cur -> row);
        printf("Enter the col\n");
        scanf("%d",&cur -> col);

        prev -> next = cur;

        prev = cur;
    }

    cur->next = NULL;

    return head;
}

void SimplePrintList(struct node *head) {
    struct node *cur = head;
    while (cur != NULL) {
        printf("%d %d %d\n", cur->data,cur->row,cur->col);
        cur = cur->next;  // Move to the next node
    }
    printf("\n");
}

void printList(struct node *head) {
    struct node *cur = head->next;
    for(int i=0;i<head->row;i++) {
      for(int j=0;j<head->col;j++) {
        if (cur->row==i && cur->col==j) {
            printf("%d\t",cur->data);
            cur = cur->next;
        }
        else{
            printf("0\t");
        }
      }
        printf("\n");
    }
}

int main(){
    struct node* ListHead = userInput();
    printList(ListHead);
    //SimplePrintList(ListHead);
}