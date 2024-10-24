#include <stdio.h>
int sum(int arr[], int n) {

  int s = 0;
  for(int i =0 ; i<n;i++) {
    s += arr[i];
  }
  return s;
}

void generateSubArray(int arr[],int n){
  int max = 0;
  for(int i = 0;i<n;i++){
    for(int j = i;j<n;j++){
      int arrS[j-i+1];
      for(int k = i;k<=j;k++){
        arrS[k-i] = arr[k];
        printf("%d ",arrS[k-i]);
      }
      printf("\n");
      int s = sum(arrS,j-i+1);
      if(s>max) {
        max = s;
      }
    }
  }
  printf("Max = %d",max);
}

void main(){

  int n =14;
  int arr[] = {-5,-10,6,3,-1,-2,13,4,-9,-1,4,12,-3,0};
  generateSubArray(arr,n);

}

//
// Created by ASUS on 10/24/2024.
//
