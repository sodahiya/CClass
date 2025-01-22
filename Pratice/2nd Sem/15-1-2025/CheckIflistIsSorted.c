#include <stdio.h>
#include <stdbool.h>

void check(int arr[],int n){

    bool asc=true, dec=true;
    //check asc
    for(int i =0;i<n-1;i++) {
        if ((arr[i]>=arr[i+1])){
            asc = false;
            break;
        }
    }
    //check dev
    for(int i =0;i<n-1;i++) {
        if (arr[i]<=arr[i+1]){
            dec = false;
            break;
        }
    }
        if (asc)
            printf("Array is sorted in ascending order");
        else if (dec)
            printf("Array is sorted in descending order");
        else printf("Array is not sorted");
}

void main(){

    int n,ser,found = 0;
    printf("Enter Number of elements in the array");
    scanf("%d",&n);

    int arr[n];

    for(int i =0;i<n;i++){
        printf("Enter the %d value",(i+1));
        scanf("%d",&arr[i]);
    }

    check(arr,n);

}