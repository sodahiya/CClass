#include <stdio.h>
#include <time.h>

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

int linerSearch(int arr[],int toFind,int n){
    for(int i =0;i<n;i++){
        if(arr[i] == toFind)
        {
            return i;
        }
    }
    return -1;
}

void main(){
    struct timespec res;
    long start, end, time_taken;
    start = clock();

    long n,ser,found = 0;
    printf("Enter number of elements in the array ");
    scanf("%d",&n);
