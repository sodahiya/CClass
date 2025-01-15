#include <stdio.h>
void main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int max = arr[0];
    int smax = arr[0];
    for(int i = 1; i<10; i++){
        if(arr[i]>max){
            smax = max;
            max = arr[i];
        }
        if (arr[i] > smax && arr[i] < max){
            smax = arr[i];
        }
    }
    printf("Second Largest element in the array is: %d", smax);
}//
// Created by ASUS on 1/15/2025.
//
