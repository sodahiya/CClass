#include <stdio.h>

int main(){
  int i;
  printf("Enter the no to check");
  scanf("%d",&i);
  int flag =0;
  for(int j =2;j <i;j++){
    flag= i%j ==0?1:flag;
  }
  if(flag ==0) {
    printf("The input is prime");
  }
  else {
    printf("The given no is not prime");
  }
  return 0;
}

//
// Created by Lions on 12-09-2024.
//
