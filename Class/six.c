#include <stdio.h>
#include <stdlib.h>

bool check(int a){
  for(int i =2;i<a;i++){
    if(a%i == 0){
      return false;
    }
  }
  return true;
}

int main(){

  int p,g,a,b,UK1,RK1;
  printf("Enter the P: ");
  scanf("%d",&p);
  printf("Enter the G: ");
  scanf("%d",&g);

  a = (rand() % 10)+1;
  b = (rand() % 10)+1;

  if(check(p) && check(g)){
    UK1 = (g-1)*(a-1);
    RK1 = (p-1)*(b-1);

    printf("The UK1 is %d\n",UK1);
    printf("The RK1 is %d\n",RK1);
  }
  else{
    printf("P and G are not prime");
  }

  return 0;
}