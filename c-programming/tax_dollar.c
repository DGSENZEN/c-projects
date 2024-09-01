#include <stdio.h>
#define TAX 0.05f


int main(int argc, char *argv[])
{
  float pre_dollars, tax, post_dollars;
  printf("Input your dollars: ");
  scanf("%f", &pre_dollars);
  tax = pre_dollars * TAX;
  post_dollars = pre_dollars + tax;
  printf("Before tax added: %f\n", pre_dollars);
  printf("With tax added: %f\n", post_dollars);
  return 0;
}
