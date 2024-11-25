#include <stdio.h>
void main(){

  int a = 5, b =20;
  int *p ;
  p = &a;
  printf("%d\n",a);
  *p = 10;
  *p = b;
  printf("%d\n",a);

}