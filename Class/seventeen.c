#include <stdio.h>
#include <math.h>
void main(){

  int PS[] = {54,72,35,14,27,62,48,31,40,20,50,35};
  int AS[] = {52,60,30,20,25,70,50,30,37,15,60,37};

  printf("Enter \n 1: Mean Absolute Error \n 2: Mean Squared Error \n 3: Root mean squared error \n");

  int c;
  scanf("%d",&c);

  if (c == 1){
    int sum = 0;
    for(int i=0;i<12;i++){
      sum += abs(PS[i]-AS[i]);
    }
    float MAE = sum/12.0;
    printf("Mean Absolute Error: %.2f",MAE);
  }
  else if (c == 2){
    int sum = 0;
    for(int i=0;i<12;i++){
      sum += (PS[i]-AS[i])*(PS[i]-AS[i]);
    }
    float MSE = sum/12.0;
    printf("Mean Squared Error: %.2f",MSE);
  }
  else if (c == 3){
    int sum = 0;
    for(int i=0;i<12;i++){
      sum += (PS[i]-AS[i])*(PS[i]-AS[i]);
    }
    float MSE = sum/12.0;
    float RMSE = sqrt(MSE);
    printf("Root Mean Squared Error: %.2f",RMSE);
  }
  else{
    printf("Invalid Input");
  }

  printf("\nSourabh Dahiya \n");
  printf("2446001");
}
//
// Created by Lions on 19-09-2024.
//
