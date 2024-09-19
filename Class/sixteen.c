#include <stdio.h> // Header file

void main() {
  char OI[] = {'B','B','C','B','C','C','C','C','B','B','B','C','C','C','B'};
  char PI[] = {'B','B','B','B','C','C','B','B','C','C','C','C','B','C','B'};

  int count =0;
	//No of bird images
  for(int i=0;i<15;i++){
    if(OI[i] == 'B'){
      count++;
    }
  }
  printf("No of Bird Images: %d \n",count);
  count = 0;
  //No of car Images
  for(int i=0;i<15;i++){
    if(OI[i] == 'C'){
      count++;
    }
  }
  printf("No of Car Images: %d \n",count);

  //No of correct classifications
  count =0;
  for(int i=0;i<15;i++){
    if(OI[i] == PI[i]){
      count++;
    }
  }
    printf("No of correct classifications: %d \n",count);

   // no of incorrect classifications
    count = 0;
    for (int i = 0; i < 15; i++)
    {
        if (OI[i] != PI[i])
        {
            count++;
        }
    }
    printf("No of incorrect classifications: %d \n", count);

    //Error percentage
    float error = (count/15.0)*100;
    printf("Error Percentage: %f",error);
}


//
// Created by Lions on 19-09-2024.
//
