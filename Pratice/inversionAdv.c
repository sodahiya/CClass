#include <stdio.h>
#include<stdlib.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n) {
    int i, j;
    // Outer loop for the number of passes
    for (i = 0; i < n-1; i++) {
        // Inner loop for each pass
        for (j = 0; j < n-i-1; j++) {
            // If current element is smaller than the next element, swap them
            if (arr[j] < arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

void main(){
      int a[] = {1,7,3,2,5};
      bubbleSort(a, 5);

      for (int i = 0; i < 5; i++)
      {
        printf("%d ",a[i]);
      }

    printf("\n");
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if (a[i]>a[j]){
                printf("(%d,%d) ",a[i],a[j]);
                count++;
            }
        }
    }
    printf("\n Max No of Inversions : %d",count);
}

//
// Created by Lions on 19-09-2024.
//
