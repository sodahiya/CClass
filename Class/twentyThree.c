#include <stdio.h>

void main(){
    int arr1[3][3];
    printf("Enter the matrix");

    for(int i =0;i<3;i++) {
        for(int j =0;j<3;j++) {
            scanf("%d",&arr1[i][j]);
        }
    }
    for(int i = 0;i<3;i++) {
      for(int j =0;j<3;j++) {
        printf("%3d",arr1[i][j]);
      }
      printf("\n");
    }
    int flag =1;
    for(int i = 0;i<3;i++){
      for(int j =0;j<3;j++){
        if(arr1[i][j] != arr1[j][i]){
          flag =0;
          break;
        }
      }
    }
    if(flag ==1){
      printf("The matrix is symmetric");
    }
    else {
      printf("The matrix is not symmetric");
    }
}
//
// Created by ASUS on 10/17/2024.
//
