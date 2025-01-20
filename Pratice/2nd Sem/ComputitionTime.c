#include <Stdio.h>
#include <time.h>

void main(){
  double start, end, time_taken;
  start = clock();

  for(int i =0;i<1000000;i++);

  end = clock();
  time_taken = (end - start);
  printf("Time taken for execution = %f ms", time_taken);
}