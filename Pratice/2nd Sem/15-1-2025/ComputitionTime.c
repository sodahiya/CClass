#include <stdio.h>
#include <time.h>

void main(){
  int start, end, time_taken;
  start = clock();
  for(int i =0;i<100000000;i++);

  end = clock();
  time_taken = (end - start);
  printf("Time taken for execution = %d ms", time_taken);
}