#include<stdio.h>
#define ARR_SIZE 5

int *takeInputFromUser() {
    static int arr[ARR_SIZE];
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("Enter the array elements at index %d", i + 1);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int *InsertionSort(int *arr) {
    static int arr2[ARR_SIZE]; // Empty array to store sorted elements

    // Insert first element directly
    arr2[0] = arr[0];

    // Insert each element from arr into arr2 at the correct position
    for (int y = 1; y < ARR_SIZE; y++) {
        int key = arr[y];
        int x = y - 1;

        // Find correct position in arr2
        while (x >= 0 && arr2[x] > key) {
            arr2[x + 1] = arr2[x]; // Shift elements right
            x--;
        }
        arr2[x + 1] = key; // Insert key at correct position
    }

    return arr2;
}


void main() {
    printf("The size of array is fixed as %d\n",ARR_SIZE);

    int *arr = takeInputFromUser();

    int *sorted = InsertionSort(arr);

    printf("The original array is\n");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nThe sorted array is\n");
    for (int i = 0; i < ARR_SIZE; i++) {
        printf("%d ", sorted[i]);
    }
}
