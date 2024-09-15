#include <stdio.h>

int main(){

  int a = 1,sum =0;
  int b =1;
  printf("%d ",a);
  for (int i =0;i<9;i++){


    sum=a+b;
    a = b;
    b =sum;
    printf("%d ",a);
  }
  printf("\nSourabh Dahiya \n");
  printf("2446001");

  return 0;
}
//
// Created by Lions on 12-09-2024.
//
