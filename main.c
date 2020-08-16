#include <stdio.h>
int main(void)
{
  float base, high, area;
  printf("Enter Base : ");
  scanf("%f", &base);
  printf("Enter High : ");
  scanf("%f", &high);
  area = 0.5*base*high;
  printf("Area = %0.2f", area);
  return 0;
}
