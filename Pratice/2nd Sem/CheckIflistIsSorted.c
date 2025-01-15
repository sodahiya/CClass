#include <stdio.h>
#include <stdbool.h>

void check(int arr[10]){

    bool asc=true, dec=true;
    //check asc
    for(int i =0;i<9;i++) {
        if ((arr[i]>arr[i+1])){
            asc = false;
            break;
        }
    }
    //check dev
    for(int i =0;i<9;i++) {
        if (arr[i]<arr[i+1]){
            dec = false;
            break;
        }
    }
        if (asc ||dec){
            printf("array is sorted\n");
        }
        else{
            printf("array is not sorted\n");
        }
}

void main(){

    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[10] = {10,9,8,7,6,5,4,3,2,1};
    int arr3[10] = {10 , 9 ,5, 4 ,11, 12};

    check(arr1);
    check(arr2);
    check(arr3);
}