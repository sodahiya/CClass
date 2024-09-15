
#include <stdio.h>

int main(){
  int x,y;
  printf("Enter first number: ");
  scanf("%d",&x);
  printf("Enter second number: ");
  scanf("%d",&y);

  for (int q =0,r =x;r>=y;q++, r-=y){
    printf("Quotient: %d, Remainder: %d\n",q,r);
  }
  printf("Sourabh Dahiya \n");
  printf("2446001");
  return 0;
}
//
// Created by Lions on 12-09-2024.
//
