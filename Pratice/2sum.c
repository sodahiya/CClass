
#include <stdio.h>

void main(){

  int a[] = {5,-3,2,7,8,0,3};
  int flag =0;
  for (int i = 0; i < 7; i++)
  {
    for (int j = i+1; j < 7; j++)
    {
      if (a[i]+a[j] == 50){

        printf("True \n(%d,%d) ",a[i],a[j]);
        flag = 1;
      }
    }
  }
  if (flag == 0){
    printf("False");
  }

}
//
// Created by Lions on 19-09-2024.
//
