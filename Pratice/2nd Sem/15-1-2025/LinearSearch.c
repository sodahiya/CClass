#include <stdio.h>
#include <time.h>
void main(){
  struct timespec res;
  long start, end, time_taken;

  long n,ser,found = 0;
  printf("Enter number of elements in the array ");
  scanf("%d",&n);

  int arr[n];

  for(int i =0;i<n;i++){
    printf("Enter the value at index %d ",i);
    scanf("%d",&arr[i]);
  }

  printf("Enter the value to search");
  scanf("%d",&ser);


  clock_gettime(CLOCK_REALTIME,&res);
  start = res.tv_nsec;


  for(int i =0;i<n;i++){
        if(arr[i] == ser)
        {
          found = i;
          break;
        }
    }
    if (found)
      printf("Element Found at index %d\n ",found);
    else
      printf("Element not in the array \n ");


  clock_gettime(CLOCK_REALTIME,&res);
  end = res.tv_nsec;


  time_taken = (end - start);
  printf("Time taken for execution = %lu ns", time_taken);
}