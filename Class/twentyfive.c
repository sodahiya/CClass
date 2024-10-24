#include <stdio.h>


  float max(int arr[]){
    int max = arr[0];
    for(int i = 1;i<5;i++){
      if(arr[i]>max){
        max = arr[i];
      }
    }
    return max;
  }
  float min(int arr[]){
    int min = arr[0];
    for(int i = 1;i<5;i++){
      if(arr[i]<min){
        min = arr[i];
      }
    }
    return min;
  }
  float average(int arr[]){
    int sum = 0;
    for(int i = 0;i<5;i++){
      sum+=arr[i];
    }
    return sum/5;
  }

  void printReverse(int arr[],int n){
    for(int i = n-1;i>=0;i--){
      printf("%d ",arr[i]);
    }
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


  printf("Max: %d\n",max(arr));
  printf("Min: %d\n",min(arr));
  printf("Average: %d\n",average(arr));
  printReverse(arr,n);
}


//
// Created by ASUS on 10/24/2024.
//
