#include <stdio.h>

int main() {
    int a,b;
    printf("Enter no a");
    scanf("%d",&a);
    printf("Enter no b");
    scanf("%d",&b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf(" The value of a is %d",a);
    printf(" The value of b is %d",b);

    return 0;
}

//
// Created by Lions on 12-09-2024.
//
