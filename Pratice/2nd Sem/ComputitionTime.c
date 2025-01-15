#include <Stdio.h>
#include <time.h>

void main(){
  double start, end, time_taken;
  start = clock();

  for(int i =0;i<1000000;i++){

  }

  end = clock();
  time_taken = (end - start);
  printf("time_taken = %f", time_taken);
}