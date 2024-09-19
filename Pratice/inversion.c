#include <stdio.h>
#include<stdlib.h>

void main(){



  int a[] = {1,7,3,2,5};

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
  printf("\n No of Inversions : %d",count);

  //max no of inversions possible



}
//
// Created by Lions on 19-09-2024.
//
