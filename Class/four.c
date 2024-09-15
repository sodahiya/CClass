#include <stdio.h>

int main(){

  int bricks;
  float length,breadth,height,volume;

  printf("Enter the length of the wall in feet: ");
  scanf("%f",&length);
  printf("Enter the breadth of the wall in feet: ");
  scanf("%f",&breadth);
  printf("Enter the height of the wall in feet: ");
  scanf("%f",&height);

  volume = length * breadth * height;

  bricks = volume * 15;
  printf("The number of bricks required is %d\n",bricks);

  printf("Sourabh Dahiya \n");
  printf("2446001");

  return 0;
}
