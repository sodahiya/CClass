#include <stdio.h>
void main(){
    int n;
    printf("Enter Number of elements in the array");
    scanf("%d",&n);

  int arr[n];

  for(int i =0;i<n;i++){
      printf("Enter the %d value",(i+1));
      scanf("%d",&arr[i]);
  }
    int max = arr[0];
    int smax = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        if (arr[i] > smax && arr[i] < max){
            smax = arr[i];
        }
    }
    printf("Second Largest element in the array is: %d", smax);
}//
// Created by ASUS on 1/15/2025.
//
