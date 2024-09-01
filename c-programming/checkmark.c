#include <stdio.h>
#define PI 3.1416
#define VOLUME_FRACTION (4.0f / 3.0f)


int main(int argc, char *argv[])
{
  float radius, volume;
  printf("Input your radius\n");
  scanf("%f", &radius);
  
  volume = (VOLUME_FRACTION * PI) * (radius * radius * radius);

  printf("Volume of the sphere: %f\n", volume);

  return 0;
}
