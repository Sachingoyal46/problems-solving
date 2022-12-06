#include <stdio.h>
int main() {
  int x, y;
  printf("enter the two number to find their coordinates:");
  scanf("%d%d", &x, &y);
  if (x > 0 && y > 0)
    printf("first quadrant");
  else if (x < 0 && y > 0)
    printf("second quadrant");
  else if (x < 0 && y < 0)
    printf("third quadrant");
  else if (x > 0 && y < 0)
    printf("forth quadrant");
  else if (x == 0 && y != 0)
    printf("y- axis");
  else if (y == 0 && x != 0)
    printf("x - axis");
  else
    printf("origin");
  return 0;
}