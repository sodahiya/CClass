#include <stdio.h>
#include <stdlib.h>
int main(){
  int first,second,third,fourth;
  first = rand() % 6 + 1;
  second = rand() % 6 + 1;
  third = rand() % 6 + 1;
  fourth = rand() % 6 + 1;
  printf("The values are %d,%d,%d and %d\n",first,second,third,fourth);
  printf("The sum of %d,%d,%d and %d is %d\n",first,second,third,fourth,first+second+third+fourth);

   return 0;
}

