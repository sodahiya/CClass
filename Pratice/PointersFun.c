#include <stdio.h>

int fun(int x,int *w, int **u){
  int y,z;
  **u +=1;
  z = **u;
  *w +=2;
  y = *w;
  x +=3;

  return x+y+z;
}

void main(){
  int c,*b,**a;
  c = 4, b = &c, a = &b;
  printf("%d",fun(c,b,a));
}

//
// Created by ASUS on 10/24/2024.
//
