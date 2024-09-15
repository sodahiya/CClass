// First program to get avg of 4 days income
#include <stdio.h>

int main(){
  float day1,day2,day3,day4,total_income,avg_income;
  printf("Enter the income of day 1 : ");
  scanf("%f",&day1);
  printf("Enter the income of day 2 : ");
  scanf("%f",&day2);
  printf("Enter the income of day 3 : ");
  scanf("%f",&day3);
  printf("Enter the income of day 4 : ");
  scanf("%f",&day4);

  total_income = day1 + day2 + day3 + day4;
  avg_income = total_income / 4;

  printf("The total income is %.2f\n",total_income);
  printf("The average income is %.2f\n",avg_income);

  printf("Sourabh Dahiya \n");
  printf("2446001");

  return 0;
}
