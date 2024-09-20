#include <stdio.h>

void main(){
  int wi,wf,li,lf;
  float ar;
  printf("Enter the width of room");
  scanf("%d %d",&wf,&wi);
  printf("Enter the length of the room");
  scanf("%d %d", &lf,&li);

  wi += 12 * wf;
  li += 12 * lf;

  ar = wi * li;

  ar = ar/16.0;

  printf("Area of the room = %f",ar);


}

//
// Created by Lions on 20-09-2024.
//
