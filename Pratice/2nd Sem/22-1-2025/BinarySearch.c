#include<stdio.h>
#include<time.h>
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

    struct timespec res;
    long start, end, time_taken;
    start = clock();

    long n,ser,found = 0;
    printf("Enter number of elements in the array ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter sorted array ");

    for(int i =0;i<n;i++){
        printf("Enter the value at index %d ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter the value to search");
    scanf("%d",&ser);


    clock_gettime(CLOCK_REALTIME,&res);
    start = res.tv_nsec;


    int result = binarySearch(arr,ser,0,n);
    if (result == -1) {
        printf("Element not in array\n");
    }
    else
        printf("Element at index %d\n",result);


    clock_gettime(CLOCK_REALTIME,&res);
    end = res.tv_nsec;

    time_taken = (end - start);
    printf("Time taken for execution = %d ns", time_taken);
}