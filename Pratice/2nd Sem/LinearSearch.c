
#include <stdio.h>

void main(){
  int n,ser,found = 0;
  printf("Enter Number of elements in the array");
  scanf("%d",&n);

  int arr[n];

  for(int i =0;i<n;i++){
      printf("Enter the %d value",(i+1));
      scanf("%d",&arr[i]);
  }

  printf("Enter the value to search");
  scanf("%d",&ser);

    for(int i =0;i<n;i++){
        if(arr[i] == ser)
        {
          found = i;
          break;
        }
    }
    if (found)
      printf("Element Found at index %d",found);
    else
      printf("Element not in the arry");


}

//
// Created by ASUS on 1/20/2025.
//
