#include <math.h>
#include <stdio.h>

int main() {
  int f = 1, i, n, x, p,sign=-1;
  float sum = 0.0;
  printf("enter the value of n\n");
  scanf("%d", &n);
  printf("enter the value of x\n");
  scanf("%d", &x);

  for (i = 1; i <= n; i++) {
    f = f * i;
    p = pow(x, i);
  sum = sum + (p / f)*sign;
    sign=sign*-1;
  }
  printf("%f", sum+1);
  return 0;
}