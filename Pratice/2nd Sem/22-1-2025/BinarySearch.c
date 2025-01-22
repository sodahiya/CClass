#include<stdio.h>

int binarySearch(int arr[],int toFind,int low, int high){
      int mid = (low + high)/2;
      if (mid == low)
          return -1;

      if (arr[mid] == toFind)
          return mid;
      else if(arr[mid]<toFind){
          binarySearch(arr,toFind,mid,high);
      }
      else if (arr[mid]>toFind){
          binarySearch(arr,toFind,low,mid);
      }
}


void main(){
    int n,ser,found = 0;
    printf("Enter number of elements in the array ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter sorted array ");
    for(int i =0;i<n;i++){
        printf("Enter the %d value ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to search");
    scanf("%d",&ser);

    int res = binarySearch(arr,ser,0,n);
    if (res == -1) {
        printf("Element not in array");
    }
    else
        printf("Element at index %d",res);
}