#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)


int main(int argc, char *argv[])
{
  float fahrenheit, celsius;
  printf("Input your temperature in fahrenheit: ");
  scanf("%f", &fahrenheit);

  celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;
  printf("Celsius: %f\n", celsius);
  return 0;
}

