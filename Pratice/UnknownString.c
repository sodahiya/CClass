#include <stdio.h>

void main(){
    char str[] = "I am Sourabh Dahiya";

    printf("%s",str);

    int count = 0;

    for(int i =0;str[i] != '\0';i++){
        count ++;
    }
    printf("\n%d\n",count);

    char revstr[count];

    for(int i =0;i<count;i++){
        printf("%c",str[count-i-1]);
    }
}

//
// Created by ASUS on 11/25/2024.
//
