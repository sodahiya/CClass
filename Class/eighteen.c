#include <Stdio.h>
#include <string.h>
void main(){

  printf("Enter the decimal No");
  int n,r;
  scanf("%d",&n);
  char c[10];
  while(n>0){
    r = n% 15;
    if (r==0){
      strcat(c,"0");
    }
    if (r==1){
      strcat(c,"1");
    }
    if (r==2){
      strcat(c,"2");
    }
    if (r==3){
      strcat(c,"3");
    }
    if (r==4){
      strcat(c,"4");
    }
    if (r==5){
      strcat(c,"5");
    }
    if (r==6){
      strcat(c,"6");
    }
    if (r==7){
      strcat(c,"7");
    }
    if (r==8){
      strcat(c,"8");
    }
    if (r==9){
      strcat(c,"9");
    }
    if (r==10){
      strcat(c,"A");
    }
    if (r==11){
      strcat(c,"B");
    }
    if (r==12){
      strcat(c,"C");
    }
    if (r==13){
      strcat(c,"D");
    }
    if (r==14){
      strcat(c,"E");
    }

    strrev(c);

    n = n/15;
  }

  printf("%s",c);

}

//
// Created by Lions on 19-09-2024.
//
