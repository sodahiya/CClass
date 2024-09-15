#include <stdio.h>

int main(){

  int w[] = {4,3,-5,1};
  int x[] = {-1,0,1,0};

  int sum = 0;
  for(int i =0;i<4;i++){
    sum += w[i] * x[i];
  }
  if(sum > 0)
  {
    printf("Signal ON\n");
  }
  else
  { 
    printf("Signal OFF\n");
  }

  return 0;
}
