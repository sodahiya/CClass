#include <stdio.h>

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {

        // Last i elements are already in place, so the loop
        // will only num n - i - 1 times
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1])
                swap(arr, j, j + 1);
        }
    }
}

float mean(int arr[],int n){
    int sum = 0;
    for(int i = 0;i<n;i++){
        sum+=arr[i];
    }
    return sum/n;
}
float median(int arr[],int n){
    bubbleSort(arr,n);
    if(n%2==0){
        return (arr[n/2]+arr[(n/2)-1])/2;
    }else{
        return arr[n/2];
    }
}

int mode(int A[],int n) {
    //finnd the most occuring element
    int max_count = 1, res = A[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (A[i] ==A[i - 1])
            count++;
        else {
            if (count > max_count) {
                max_count = count;
                res = A[i - 1];
            }
            count = 1;
        }
    }
    // If last element is most frequent
    if (count > max_count)
    {
        max_count = count;
        res = A[n - 1];
    }
    return res;
}


void main(){

    int n;
    printf("Enter The Size of the array");
    scanf("%d",&n);
    int arr[n];

    for(int i=0 ;i<n;i++){
        printf("Enter the value of arr[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    int c;
    printf("Enter the choices \n 1. Mean \n 2. Median \n 3. Mode \n");
    scanf("%d",&c);

    switch(c){
        case 1:
            printf("Mean: %.2f",mean(arr,n));
            break;
        case 2:
            printf("Median: %.2f",median(arr,n));
            break;
        case 3:
            printf("Mode: %d",mode(arr,n));
        break;
        default:
            printf("Invalid Choice");
    }

    printf("\n Sourabh Dahiya \n");
    printf("2446001");
}

//
// Created by ASUS on 10/24/2024.
//
