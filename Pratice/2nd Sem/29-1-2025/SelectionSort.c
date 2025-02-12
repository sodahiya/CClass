#include<stdio.h>
#define ARR_SIZE 5

int *takeInputFromUser() {
    static int arr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("Enter the array elements at index %d ", i + 1);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int minIndex(int *arr, int start ) {
    int min = start;
    for (int i = start+1; i < ARR_SIZE; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
    }
    return min;
}

int* SelectionSort(int *arr){
    for (int i = 0; i < ARR_SIZE; i++) {
        int minIndexValue = minIndex(arr,i);
        int temp = arr[minIndexValue];
        arr[minIndexValue] = arr[i];
        arr[i] = temp;
    }
    return arr;
}

void main() {
    printf("The size of array is fixed as %d\n",ARR_SIZE);

    int *arr = takeInputFromUser();

    printf("The original array is\n");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }

    int *sorted = SelectionSort(arr);


    printf("\nThe sorted array is\n");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", sorted[i]);
    }
}