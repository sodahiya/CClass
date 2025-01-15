#include <Stdio.h>

void main(){
  int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  int max = arr[0];
  for(int i = 1; i<10; i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  printf("Largest element in the array is: %d", max);
}