#include <stdio.h>
int main() {
  float a, b, c;
  printf("enter the sides of the triangles:");
  scanf("%f%f%f", &a, &b, &c);

  if (a + b > c && b + c > a && c + a > b) {
    if (a == b && b == c) {
      printf("equilateral triangles");
    } else if (a == b || b == c || c == a) {
      printf("isoscales triangle");
    } else
      printf("scaler triangle");
  } else
    printf("triangle are invalid");
  return 0;
}