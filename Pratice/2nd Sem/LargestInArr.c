#include <stdio.h>
void main(){
  int n;
  printf("Enter number of elements in the array");
  scanf("%d",&n);

  int arr[n];

  for(int i =0;i<n;i++){
      printf("Enter the %d value ",(i+1));
      scanf("%d",&arr[i]);
  }

  int max = arr[0];
  for(int i = 1; i<n; i++){
    if(arr[i]>max){
      max = arr[i];
    }
  }
  printf("Largest element in the array is: %d", max);
}