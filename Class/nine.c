#include <stdio.h>

int main(){
  int no;
    scanf("%d",&no);
    int fact =1;
    for(int i=2;i<no;i++){
          fact *= i;
    }

    printf("Factorial of %d is %d",no,fact);

    return 0;
}
//
// Created by Lions on 12-09-2024.
//
