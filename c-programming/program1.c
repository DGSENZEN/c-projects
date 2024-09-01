#include <stdio.h>
#define INCHES_PER_POUND 166

int main(int argc, char *argv[])
{
  int height, weight, length, volume, width;
  printf("Enter the height: ");
  scanf("%d", &height);
  printf("Enter the width: ");
  scanf("%d", &width);
  printf("Enter the length: ");
  scanf("%d", &length);
  volume = height * length * width;
  weight = (volume +  INCHES_PER_POUND - 1) / INCHES_PER_POUND;

  printf("Dimensional weight of the box: %d \n", weight);
  printf("Total volume of the box: %d\n", volume);

  return 0;
}
