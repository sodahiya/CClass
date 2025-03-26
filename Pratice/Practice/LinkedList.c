#include <stdio.h>
#include <stdlib.h>  // Required for malloc()

struct node {
    int data;
    struct node *next;
};

// Function to print the linked list
void printList(struct node *head) {
    printf("Linked List: ");
    struct node *current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct node* createLinkedListFromArray(int arr[], int size) {
    if (size == 0) return NULL;  // If array is empty, return NULL

    struct node *head = (struct node*)malloc(sizeof(struct node)); // Allocate memory for head
    if (head == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }

    head->data = arr[0];  // Assign first element
    head->next = NULL;

    struct node *previous = head;

    for (int i = 1; i < size; i++) {
        struct node *cur = (struct node*)malloc(sizeof(struct node));
        if (cur == NULL) {
            printf("Memory allocation failed.\n");
            return NULL;
        }

        cur->data = arr[i];
        cur->next = NULL;

        previous->next = cur;
        previous = cur;
    }

    return head;  // Return the head of the linked list
}

struct node* mulby5(struct node* head ) {
    struct node* cur = head;
    while (cur != NULL){
        cur->data = cur->data*5;
        cur = cur->next;
    }
    return head;
}


int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Predefined array
    int size = sizeof(arr) / sizeof(arr[0]);

    struct node *head = createLinkedListFromArray(arr, size);  // Create linked list

    printList(head);  // Display the linked list

    head = mulby5(head);
    printList(head);


    return 0;
}
