#include <stdio.h>
void f1(char *s1, char *s2){
    char *temp = s1;
    s1 = s2;
    s2 = temp;
}

void f2(char **s1, char **s2){
   char *tmp;
   tmp = *s1;
   *s1 = *s2;
   *s2 = tmp;
}

int main(){
    char *s1 = "Come";
    char *s2 = "go";
    f1(s1,s2);
    printf("%s %s\n",s1,s2);
    f2(&s1,&s2);
    printf("%s %s\n",s1,s2);
    return 0;
}

//
// Created by ASUS on 10/24/2024.
//
