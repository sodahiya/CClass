#include <stdio.h>

const int LAPS =78;
const float DISTANCE = 3.5;
const int TIME = 145;
int main(){

  float tracklength = LAPS * DISTANCE;
  float speed = (LAPS * DISTANCE) / (TIME / 60.0);

  printf("The track length was %.2f km\n",tracklength);
  printf("The average speed was %.2f km per hour\n",speed);

  printf("Sourabh Dahiya \n");
  printf("2446001");

  return 0;
}
