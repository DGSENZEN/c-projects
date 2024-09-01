#include <stdio.h>
#define TWENTY 20
#define TEN 10
#define FIVE 5
#define ONE 1



int main(int argc, char *argv[])
{
  int input, total, bills, output;
  printf("Enter a dollar amount: ");
  scanf("%d", &input); 
  
  //getting the amount of bills of 20 
  bills = input / TWENTY;
  total = input - (bills * TWENTY);
  printf("$20 bills: %d\n", bills);
  
  //getting the amount of bills of 10
  bills = total / TEN;
  total = total - (bills * TEN);
  printf("$10 bills: %d\n", bills);

  //getting the amount of bills of 5 
  bills = total / FIVE;
  total = total - (bills * FIVE);
  printf("$5 bills: %d\n", bills);

  //getting the amount of bills of 1
  bills = total / ONE;
  total = total - (bills * ONE);
  printf("$1 bills: %d\n", bills);
  return 0;
}
