#include<stdio.h>

void delElement(int arr[],int len,int delIndex){
      for (int i = delIndex;i<len-1;i++){
          arr[i] = arr[i+1];
      }
}


void printArray(int arr[],int len){
    for(int i = 0;i<len;i++){
      printf("%d ",arr[i]);
    }
}


void main(){

    int n,ser,found = 0,del;
    printf("Enter number of elements in the array ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter sorted array\n");
    for(int i =0;i<n;i++){
        printf("Enter the %d value ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("The original array is : ");
    printArray(arr,n);

    printf("\nEnter the index of the element to delete");
    scanf("%d",&del);

    delElement(arr,n,del);
    n = n-1;
    printf("The array after deletion is : ");
    printArray(arr,n);

}






