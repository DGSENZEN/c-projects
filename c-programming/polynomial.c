#include <stdio.h>
#define POW_2 x * x
#define POW_3 POW_2 * x
#define POW_4 POW_2 * POW_2
#define POW_5 POW_3 * POW_2


int main(int argc, char *argv[])
{
  int x, polynomial;
  printf("Input your x: ");
  scanf("%d", &x); //Input x for horner evaluation.
  //polynomial = 3*(POW_5) + 2*(POW_4) - 5*(POW_3) - (POW_2) + 7*(x) - 6; //Edited for horner evaluation
  polynomial = ((((3*x + 2)* x - 5)* x - 1)* x + 7) * x - 6;
  printf("The result of your polynomial is: %d", polynomial);
  return 0;
}
