#include <stdio.h> // Header file

int main(){

  int flag =0;
  for (int i = 2; i < 100; i++) {
    flag =0;
    for (int j = 2; j < i; j++) {
      if (i % j == 0) {
        flag =1;
        break;
      }
    }
    if( flag ==0)
      printf("%d ", i);
  }

  printf("\nSourabh Dahiya \n");
  printf("2446001");
  return 0;
}

//
// Created by Lions on 12-09-2024.
//
