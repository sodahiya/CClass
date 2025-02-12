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

int *BubbleSort(int *arr) {
    for(int i = 0; i < ARR_SIZE; i++) {
        for(int j = 0; j < ARR_SIZE - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    int *sorted = BubbleSort(arr);


    printf("\nThe sorted array is\n");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", sorted[i]);
    }
}