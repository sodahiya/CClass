#include <stdio.h>

int* initializeQueue(int arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);

    for (int i =0;i<n;i++){
        arr[i] = 0;
    }
    return arr;
}

void printQueue(int arr[]){
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Queue : \n");
    for (int i =0;i<n;i++){
        printf("%d ",arr[i]);
    }
}


void main(){
    int size =10;
    int arr[size];

    int* ar = initializeQueue(arr);

    printQueue(ar);
}
