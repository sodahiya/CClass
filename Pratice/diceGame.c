#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  int p1,p2,p3,p4;
    srand(time(NULL));
    p1 = rand()%6+1 + rand()%6+1;
    p2 = rand()%6+1 + rand()%6+1;
    p3 = rand()%6+1 + rand()%6+1;
    p4 = rand()%6+1 + rand()%6+1;

    printf("P1 got %d,\nP2 got %d,\nP3 got %d,\nP4 got %d\n",p1,p2,p3,p4);
    char *min = malloc(4 *sizeof(char));;

    if (p1 == p2 && p2 == p3 && p3 == p4) {
        printf("draw");
    }
    if(p1<p2 && p1<p3 && p1<p4){
        min = "P1";
    }else if(p2<p1 && p2<p3 && p2<p4) {
        min = "P2";
    }else if(p3<p1 && p3<p2 && p3<p4) {
        min = "P3";
    }else {
        min = "P4";
    }

    printf("%s is the winner",min);
  return 0;
}
//
// Created by Lions on 12-09-2024.
//
