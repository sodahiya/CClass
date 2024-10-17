#include <stdio.h>

void main(){

  char str[6][10];
  for(int i = 0;i<6;i++){
        printf("Enter the string");
        scanf("%s",str[i]);
   }

    for(int i = 5;i>=0;i--) {
        printf("%s\n",str[i]);
    }
}

//
// Created by ASUS on 10/17/2024.
//
