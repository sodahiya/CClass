
#include <stdio.h>

struct wallarea{
    int length;
    int breadth;
    int height;
}wall1,wall2;

void main(){

  wall1.length = 12;
  wall1.breadth = 17;
  wall1.height = 10;
  int area1 = 2*(wall1.length*wall1.height + wall1.length*wall1.breadth+ wall1.breadth*wall1.height);
  printf("Area of Wall 1: %d \n",area1);

    wall2.length = 13;
    wall2.breadth = 15;
    wall2.height = 10;

    int area2 = 2*(wall2.length*wall2.height + wall2.length*wall2.breadth+ wall2.breadth*wall2.height);
    printf("Area of Wall 2: %d \n",area2);
}


//
// Created by ASUS on 11/25/2024.
//
